const int HALLPIN1 =3;
const int HALLPIN2 =2;
int steps = 0;
int lastStep = 0;
int prevSteps;
bool home = false;
void countPulse(){
  steps ++;
}
void setup() {
attachInterrupt(digitalPinToInterrupt(HALLPIN2), countPulse, RISING); //Attaching digital interrupt to pin 3, if voltage increases the method countPulse is run
  Serial.begin(9600); //Starting serial monitor at 9600 baud
  //clearing Serial Monitor
  for (int i = 0; i <10; i++){
    Serial.println(" ");
  }
}

void loop() {
  if(home == false){
    autoHome(1,2);
    home = true;
  }
}
void autoHome(int pin1, int pin2){
  prevSteps = steps;
  float timer = millis();
  while(prevSteps != steps){ // while previous step does not equal the current step
    if((millis()-timer) > 10 )
    digitalWrite(pin1, HIGH); //retract motor
    digitalWrite(pin2, LOW);
    Serial.println("retracting");
    Serial.println(steps/17.4);
    
  }
  Serial.println("Retracted"); //actuator is fully retracted
  steps = 0; // zero steps
  prevSteps = 0;
  Serial.println("Distance zeroed.");
}
