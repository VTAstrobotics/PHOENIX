const int WIPER = A1;
const int ACTUATOR1 = 6;
const int ACTUATOR2 = 5;
const int ENA = 9;
const int STROKELENGTH=8; // maximum stroke length of the actuator
int minReading = 13; // value displayed by potentiometer at minimum position
int maxReading = 868; // value displayed by potentiometer at maximum position
// we can use these three values to convert the resistance read by the potentiometer to distance values as seen in the distance method

void setup() {
  pinMode(WIPER, INPUT);
  pinMode(ACTUATOR1, OUTPUT);
  pinMode(ACTUATOR2, OUTPUT);
  pinMode(ENA, OUTPUT);
  Serial.begin(9600);
  analogWrite(ENA, 255);
}

void loop() {
moveActuator(1);
Serial.println(distance());
}
float distance(){
  return ((readPotentiometer() - minReading)*(STROKELENGTH)/(maxReading-minReading))*25.4; //converting resistance to mm +- 0.01mm
}

float readPotentiometer(){
  return analogRead(WIPER);
}
void moveActuator(int direction, int speed){
  analogWrite(ENA, speed);
  switch (direction){
    case 1:
    digitalWrite(ACTUATOR1, LOW);
    digitalWrite(ACTUATOR2, HIGH);
    break;
    case -1:
    digitalWrite(ACTUATOR1, HIGH);
    digitalWrite(ACTUATOR2, LOW);
    break;
    default:
    digitalWrite(ACTUATOR1, LOW);
    digitalWrite(ACTUATOR2, LOW);
    break;
  }
}
