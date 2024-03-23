#include <PID_v1.h> 
//TODO: assign hall pins their respective values
const int HALLPIN11 = A3;
const int HALLPIN12 = 10;
const int HALLPIN21 = A3; 
const int HALLPIN22 = 10; 
int steps1 = 0;
int steps2 = 0;
int pos1 = 0;
int pos2 = 0;
const int actuator11 = A10;
const int actuator12 = A11;
//TODO: set these to actual values;
const int actuator 21 = 0;
const int actuator 22 = 0

double Setpoint, Input, Output; //arguments of PID regulator 
double consKp = 1.00, consKi = 0.00, consKd = 0.00; //parameters of PID

PID myPID(&Input, &Output, &Setpoint, consKp, consKi, consKd, DIRECT); 
void countPulse1(){
  steps1 ++;
}
void countPulse2(){
  steps2 ++;
}
void setup()
{
  attachInterrupt(digitalPinToInterrupt(HALLPIN1), countPulse1, RISING);
  attachInterrupt(digitalPinToInterrupt(HALLPIN2), countPulse1, RISING);
  pinMode (5, OUTPUT);  // PWM master
  pinMode (3, OUTPUT);  // PWM child
  pinMode (actuator11, OUTPUT); //extension of master
  pinMode (actuator12, OUTPUT); //retract of master
  pinMode (actuator21, OUTPUT); //extension of master
  pinMode (actuator22, OUTPUT); //retract of master
  analogWrite(2, 150);  //speed of master

  Output = 0;

  myPID.SetTunings(consKp, consKi, consKd);
  myPID.SetOutputLimits(-255, 255);  //configurate the speed limits 
  myPID.SetMode(AUTOMATIC);
  Serial.begin(9600);
}

void loop()
{
  getPosition1();
  getPosition2();
  Setpoint = pos1; // reading position from parent
  Input = pos2; //reading position from child
  myPID.Compute();

  Serial.print("Setpoint: ");
  Serial.print(Setpoint);
  Serial.print(", Input: ");
  Serial.print(Input);
  Serial.print(", Output :");
  Serial.println(Output);

  //child
  int childSpeed = 0;
  if (Output > 0) {
    childSpeed = Output;
    moveActuator2(1);
  }
  else {
    childSpeed = -Output;
    moveActuator2(-1);
  }
  childSpeed = constrain(childSpeed, 0, 255);
  if (childSpeed == 0) {
    moveActuator2(0);
  }
  analogWrite(3, childSpeed); //speed of child
  moveActuator1(1);
  }


void getPosition1(void){
  pos1 = pos1 + steps1/17.4;
}

void getPosition2(void){
  pos2 = pos2 + steps2/17.4;
}

void moveActuator1(int val){
  if(val = 1){
    digitalWrite(actuator11, HIGH);
    digitalWrite(actuator12, LOW);
}
else if(val = -1){
  digitalWrite(actuator11, LOW);
  digitalWrite(actuator12, HIGH);
}
else{
  digitalWrite(actuator11, LOW);
  digitalWrite(actuator12, LOW);
}
}
void moveActuator2(int val){
  if(val = 1){
    digitalWrite(actuator21, HIGH);
    digitalWrite(actuator22, LOW);
}
else if(val = -1){
  digitalWrite(actuator21, LOW);
  digitalWrite(actuator22, HIGH);
}
else{
  digitalWrite(actuator21, LOW);
  digitalWrite(actuator22, LOW);
}
}
  