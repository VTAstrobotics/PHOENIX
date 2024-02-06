const int HALLPIN1 =3;
const int HALLPIN2 =2;
int steps = 0;
int stop = 1;
const int TOMILLI = 17.4;
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
  Serial.println(steps/17.4); //converting to mm

}
