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
                L_DRV,
                R_DRV,
                DIG_LIN,
                DIG_BUCK,
                DIG_WORM,
                DUMP_LIN };

// value to give a Servo to stop
const int SERVO_STOP_VAL = 90;

// drive motor pins
// const int L_DRV = x;
// const int R_DRV = x;
// Servo leftDrive, rightDrive;

// dig linear actuator pins
// const int DIG_LIN1 = 2;
// const int DIG_LIN2 = 3;

// dig bucket motors pins
// const int DIG_BUCK = x;
// const int DIG_WORM = x;
// Servo digBuck, digWorm;

// dump linear actuator pins
// const int DUMP_LIN1 = x;
// const int DUMP_LIN2 = x;

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
  // leftDrive.attach(L_DRV);
  // rightDrive.attach(R_DRV);

  // dig linear actuators
  // pinMode(DIG_LIN1, OUTPUT);
  // pinMode(DIG_LIN2, OUTPUT);

  // dig bucket motors
  // digBuck.attach(DIG_BUCK);
  // digWorm.attach(DIG_WORM);

  // dump linear actuators
  // pinMode(DUMP_LIN1, OUTPUT);
  // pinMode(DUMP_LIN2, OUTPUT);
}

/**
 * 
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
 * 
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
 * 
 */
void stopDriveMotors() {
  // leftDrive.write(SERVO_STOP_VAL);
  // rightDrive.write(SERVO_STOP_VAL);
}

/**
 * 
 */
void stopDigActuators() {
  // digitalWrite(DIG_LIN1, LOW);
  // digitalWrite(DIG_LIN2, LOW);
}

/**
 * 
 */
void stopDigBucketMotors() {
  // digBuck.write(SERVO_STOP_VAL);
  // digWorm.write(SERVO_STOP_VAL);
}

/**
 * 
 */
void stopDumpActuators() {
  // digitalWrite(DUMP_LIN1, LOW);
  // digitalWrite(DUMP_LIN2, LOW);
}

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
    *separator++ = '\0';  // separate c strings, then move to the next

    const char* cval = separator;
    separator = strchr(cval, ';');
    *separator = '\0';

    const int id = atoi(cid);
    const float val = atof(cval);

    switch (id) {
      case L_DRV:
        Serial1.print("Left drive = ");
        Serial1.println(val); // BACKWARD < STOP < FORWARD
        // moveServo(leftDrive, val);
        break;
      case R_DRV:
        Serial1.print("Right drive = ");
        Serial1.println(val); // FORWARD < STOP < BACKWARD
        // moveServo(rightDrive, val);
        break;
      case DIG_LIN:
        Serial1.print("Dig linear actuators = ");
        Serial1.println(val);
        // moveLinearActuator(DIG_LIN1, DIG_LIN2, val);
        break;
      case DIG_BUCK:
      case DIG_WORM:
        Serial1.print("Dig bucket motor = ");
        Serial1.println(val);
        // moveServo(digBuck, val);
        // moveServo(digWorm, 5*val/7);
        break;
      case DUMP_LIN:
        Serial1.print("Linear actuator = ");
        Serial1.println(val);
        // moveLinearActuator(DUMP_LIN1, DUMP_LIN2, val);
        break;
      case UNDEF:
      default:
        Serial1.print("Error, unable to parse \"");
        Serial1.print(message);
        Serial1.println("\"");
        // this helps prevent one bad message from propagating and
        // affecting the rest, however, you will lose whatever is in the buffer.
        Serial1.flush();
    } // end switch/case
  } // end if (Serial1.available)
} // end loop()
