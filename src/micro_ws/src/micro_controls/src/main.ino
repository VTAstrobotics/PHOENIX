#include <Servo.h>

/*************************
 *     general setup     *
 *************************/
const int watchdogTimeoutMs = 1000;
long lastTime, curTime;
const int baudrate = 115200;

/*************************
 *     actuator info     *
 *************************/
// motor ids (for jetson->arduino comms)
enum MOTOR_ID { UNDEF,
                LDRV,
                RDRV,
                DIGLIN,
                DIGBUCK,
                DUMPLIN };

// value to give a Servo to stop
const int SERVO_STOP_VAL = 90;

// drive motor pins
const int L_DRV = 10;
const int R_DRV = 11;
Servo leftDrive, rightDrive;

// dig linear actuator pins
const int DIG_LIN1 = 6;
const int DIG_LIN2 = 7;

// dig bucket motors pins
const int DIG_BUCK1 = 4;
const int DIG_BUCK2 = 5;
Servo digBuck1, digBuck2;

// dump linear actuator pins
const int DUMP_LIN1 = 8;
const int DUMP_LIN2 = 9;

void setup() {
/*************************
 *     general setup     *
 *************************/
  Serial1.begin(baudrate);
  lastTime = millis();
  curTime = millis();

/*************************
 *     actuator setup    *
 *************************/
  // drive motors
  leftDrive.attach(L_DRV);
  rightDrive.attach(R_DRV);

  // dig linear actuators
  pinMode(DIG_LIN1, OUTPUT);
  pinMode(DIG_LIN2, OUTPUT);

  // dig bucket motors
  digBuck1.attach(DIG_BUCK1);
  digBuck2.attach(DIG_BUCK2);

  // dump linear actuators
  pinMode(DUMP_LIN1, OUTPUT);
  pinMode(DUMP_LIN2, OUTPUT);
}

/**
 * Moves a servo to a given value in [0, 180]
 * @param servo is the servo
 * @param val is the value to move to
 */
void moveServo(Servo servo, int val) {
  if (val >= 0 && val <= 180) {
    servo.write(val);
  } else {
    Serial1.print("Invalid value sent to Servo. Given: ");
    Serial1.print(val);
    Serial1.println(" but expected a value in [0, 180]");
    servo.write(SERVO_STOP_VAL);
  }
}

/**
 * Moves a linear actuator up or down based on the val where 1 is up, 0 is stop, and -1 is down
 * @param pin1 is the first pin of the linact on the hbridge
 * @param pin2 is the second pin of the linact on the hbridge
 * @param val is the value specifying the target in {-1, 0, 1}
 */
void moveLinearActuator(int pin1, int pin2, int val) {
  // for now 1 => up, 0 => stop, -1 => down
  if (1 == val) {
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, LOW);
  } else if (-1 == val) {
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, HIGH);
  } else {
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, LOW);
  }
}

/**
 * Stops both drive motors
 */
void stopDriveMotors() {
  leftDrive.write(SERVO_STOP_VAL);
  rightDrive.write(SERVO_STOP_VAL);
}

/**
 * Stops both dig linear actuators
 */
void stopDigActuators() {
  digitalWrite(DIG_LIN1, LOW);
  digitalWrite(DIG_LIN2, LOW);
}

/**
 * Stops both dig bucket motors
 */
void stopDigBucketMotors() {
  digBuck1.write(SERVO_STOP_VAL);
  digBuck2.write(SERVO_STOP_VAL);
}

/**
 * Stops both dump linear actuators
 */
void stopDumpActuators() {
  digitalWrite(DUMP_LIN1, LOW);
  digitalWrite(DUMP_LIN2, LOW);
}

/**
 * Stops all moving things (motors, linear actuators, etc.)
 */
void stopAll() {
  stopDriveMotors();
  stopDigActuators();
  stopDigBucketMotors();
  stopDumpActuators();
}

void loop() {
  curTime = millis();
  if ((curTime - lastTime) > watchdogTimeoutMs) {
    stopAll();
  }

  if (Serial1.available() > 0) {
    lastTime = millis();

    // could maybe use null terminator rather than semicolon
    // EXPECTED FORMAT: "id:val;"
    String message = Serial1.readStringUntil(';');

    // Send the modified message back to the Jetson Nano
    Serial1.print("I received: ");
    Serial1.print(message);
    Serial1.println();

    const char* cid = message.c_str();
    char* separator = strchr(cid, ':');
    if (NULL == separator) {cid = "";} // if no ':' found
    *separator++ = '\0';  // separate c strings, then move to the next

    const char* cval = separator;
    separator = strchr(cval, ';');
    // if (NULL == separator) {cid = "";} // DO NOT DO THIS BECUSE READSTRING**UNTIL** IS EXCLUSIVE
    *separator = '\0';

    const int id = atoi(cid);
    const float val = atof(cval);

    switch (id) {
      case LDRV:
        Serial1.print("Left drive = ");
        Serial1.println(val); // BACKWARD < STOP < FORWARD
        moveServo(leftDrive, val);
        break;
      case RDRV:
        Serial1.print("Right drive = ");
        Serial1.println(val); // FORWARD < STOP < BACKWARD
        moveServo(rightDrive, val);
        break;
      case DIGLIN:
        Serial1.print("Dig linear actuators = ");
        Serial1.println(val);
        moveLinearActuator(DIG_LIN1, DIG_LIN2, val);
        break;
      case DIGBUCK:
        {
          Serial1.print("Dig bucket motor1 = ");
          Serial1.println(val);
          moveServo(digBuck1, val);
          float inv_val = 90 + (90 - val);
          Serial1.print("Dig bucket motor2 = ");
          Serial1.println(val);
          moveServo(digBuck2, val);
          break;
        }
      case DUMPLIN:
        Serial1.print("Dump linear actuators = ");
        Serial1.println(val);
        moveLinearActuator(DUMP_LIN1, DUMP_LIN2, val);
        break;
      case UNDEF:
      default:
        // Serial1.print(message); // DON'T do this if you can't parse because bad encoding, it's dangerous to respond with it
        Serial1.println("Error, unable to parse message.");
    } // end switch/case
  } // end if (Serial1.available)
} // end loop()
