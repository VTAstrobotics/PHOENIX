const int HALLPIN1 = 3;
const int HALLPIN2 = 2;
const int ENA = 9;
const int LIN1 = 14; 
const int LIN2 = 15;
int steps = 0;
bool dir = false;
double pos;
long lastTime, curTime;
enum MOTOR_ID { UNDEF,
                LD,
                RD,
                LIN,
                SCR,
                DBLT };

void countPulse(){
  steps ++; //position = steps/17.4
}

void setup() {
  attachInterrupt(digitalPinToInterrupt(HALLPIN2), countPulse, RISING); //Attaching digital interrupt to pin 3, if voltage increases the method countPulse is run
  pinMode(LIN1, OUTPUT);
  pinMode(LIN2, OUTPUT);
  pinMode(ENA, OUTPUT);
  Serial1.begin(115200);
}

//lifts the bucket, brings the bucket up to dump, then goes back home 
void loop() { 
  curTime = millis();

  if ((curTime - lastTime) > 1000) {
    stopLinearActuators();
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
      case LIN:
        Serial1.print("Linear actuator = ");
        Serial1.println(val);
        moveLinearActuator(LIN1, LIN2, val);
      case UNDEF:
      default:
        Serial1.println("Error, unable to parse motor ID");
        // this prevents one bad message from propagating and affecting the rest,
        // however, you will lose whatever is in the buffer.
      Serial1.flush();
}
}  
}  

void moveLinearActuator(int pin1, int pin2, int val) {
  // for now 1 => up, 0 => stop, -1 => down
  if (1 == val) {
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, LOW);
  }
  else if (-1 == val) {
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, HIGH);
  }
  else {
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, LOW);
  }
}

void stopLinearActuators() {
  digitalWrite(LIN1, LOW);
  digitalWrite(LIN2, LOW);
}

void goToPos(double targetPos){
  if(targetPos > pos){
    dir = false;
    delay(1000);
    while (targetPos > pos) {
    digitalWrite(LIN1, HIGH);
    digitalWrite(LIN2, LOW);
    getPosition();
    Serial.println(pos);
  }
  }
  else if (targetPos < pos){
    dir = true;
    delay(1000);
    while(targetPos < pos){
    digitalWrite(LIN1, LOW);
    digitalWrite(LIN2, HIGH);
    getPosition();
    Serial.println(pos);
  }
  }
}

void getPosition(void){
if(dir == false){
  pos = pos + steps/17.4;
  steps = 0;
}
else{
  pos = pos - steps/17.4;
  steps = 0;
}

}
