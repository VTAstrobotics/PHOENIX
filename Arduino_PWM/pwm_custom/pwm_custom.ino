
// Timer 1: PWM output on Pin 10
// Timer 2: PWM output on Pin 3

// Timer 0 PWM pins
const int PIN_1A = 9;
const int PIN_1B = 10;
// Timer 2 PWM pins
const int PIN_2A = 11;
const int PIN_2B = 3;

const int NEUTRAL_VAL = 93;
const int FORWARD_VAL  = 100;
const int REVERSE_VAL = 80;

enum mode {NEUTRAL, FORWARD, REVERSE};

void setup() {
  pinMode(PIN_1A, OUTPUT);
  pinMode(PIN_1B, OUTPUT);
  pinMode(PIN_2A, OUTPUT);
  pinMode(PIN_2B, OUTPUT);

  Serial.begin(9600);
  
  init_pwm();
  set_pwm_2(FORWARD, 0.6);
  delay(5000);
  set_pwm_2(FORWARD, 0.4);
  delay(1000);
  set_pwm_2(FORWARD, 0.3);
  delay(1000);
  set_pwm_2(FORWARD, 0.2);
}

void loop() {

/*
  set_pwm_1(NEUTRAL, 0.1);
  delay(500);
  
  set_pwm_1(FORWARD, 0.2);
  delay(500);
  set_pwm_1(FORWARD, 0.3);
  delay(500);
  set_pwm_1(FORWARD, 0.4);
  delay(500);
  set_pwm_1(FORWARD, 0.5);
  delay(500);
  set_pwm_1(FORWARD, 0.6);
  delay(500);
  set_pwm_1(FORWARD, 0.5);
  delay(500);
  set_pwm_1(FORWARD, 0.4);
  delay(500);
  set_pwm_1(FORWARD, 0.3);
  delay(500);
  set_pwm_1(FORWARD, 0.2);
  delay(500);
  set_pwm_1(FORWARD, 0.1);
  delay(500);
*/
}


void init_pwm() {
  // Timer 1 settings:
  // WGM1 = 1111  Fast PWM with controlled top limit
  // COM1A = 00   Output A disconnected
  // COM1B = 10   Output B non-inverted
  // CS1 = 100    Prescaling factor set to 256
  TCCR1A = _BV(COM1B1) | _BV(WGM11) | _BV(WGM10);
  TCCR1B = _BV(WGM13) | _BV(WGM12) | _BV(CS12);
  OCR1A = NEUTRAL_VAL;
  OCR1B = 0;
  
  // Timer 2 settings:
  // WGM2 = 111   Fast PWM with controlled top limit
  // COM2A = 00   Output A disconnected
  // COM2B = 10   Output B non-inverted
  // CS2 = 110    Prescaling factor set to 256
  TCCR2A = _BV(COM2B1) | _BV(WGM21) | _BV(WGM20);
  TCCR2B = _BV(WGM22) | _BV(CS22) | _BV(CS21);
  OCR2A = NEUTRAL_VAL;
  OCR2B = 0;
}


void set_pwm_1(mode mode_1, float duty_cycle) {
  switch (mode_1) {
    case NEUTRAL:
      OCR1A = NEUTRAL_VAL;
      OCR1B = round(NEUTRAL_VAL * duty_cycle);
      break;
    case FORWARD:
      OCR1A = FORWARD_VAL;
      OCR1B = round(FORWARD_VAL * duty_cycle);
      break;
    case REVERSE:
      OCR1A = REVERSE_VAL;
      OCR1B = round(REVERSE_VAL * duty_cycle);
      break;
  }
}


void set_pwm_2(mode mode_2, float duty_cycle) {
  switch (mode_2) {
    case NEUTRAL:
      OCR2A = NEUTRAL_VAL;
      OCR2B = round(NEUTRAL_VAL * duty_cycle);
      break;
    case FORWARD:
      OCR2A = FORWARD_VAL;
      OCR2B = round(FORWARD_VAL * duty_cycle);
      break;
    case REVERSE:
      OCR2A = REVERSE_VAL;
      OCR2B = round(REVERSE_VAL * duty_cycle);
      break;
  }
  Serial.println(OCR2B);
}
