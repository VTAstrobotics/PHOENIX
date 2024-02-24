const int HALLPIN1 =3;
const int HALLPIN2 =2;
const int ENA = 9;
const int ACTUATOR1 = 5; 
const int ACTUATOR2 = 6;
int steps = 0;
double pos;
int distance;
bool dir = true;
bool test = true;
int value = 0;
void countPulse(){
  steps ++;
}
void setup() {
  attachInterrupt(digitalPinToInterrupt(HALLPIN2), countPulse, RISING); //Attaching digital interrupt to pin 3, if voltage increases the method countPulse is run
  Serial.begin(9600); //Starting serial monitor at 9600 baud
  pinMode(ACTUATOR1, OUTPUT);
  pinMode(ACTUATOR2, OUTPUT);
  pinMode(ENA, OUTPUT);
}

void loop() {
  getPosition();
  Serial.println(pos);
  goToPos(-20);
  Serial.println("out of loop");
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
void goToPos(double position){
  if(position > 0){
    dir = false;
    delay(1000);
  while(pos < position ){
    digitalWrite(ACTUATOR1, HIGH);
    digitalWrite(ACTUATOR2, LOW);
    getPosition();
    Serial.println(pos);
    Serial.println("loop 1");
  }
  }
  else if (position < 0){
    dir = true;
    delay(1000);
    while(pos > position ){
    digitalWrite(ACTUATOR1, LOW);
    digitalWrite(ACTUATOR2, HIGH);
    getPosition();
    Serial.println(pos);
    Serial.println("loop 2");
  }
  }
    digitalWrite(ACTUATOR1, LOW);
    digitalWrite(ACTUATOR2, LOW);
    Serial.println(pos);
  
}


