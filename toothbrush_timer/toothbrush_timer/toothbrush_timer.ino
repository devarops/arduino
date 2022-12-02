int green_led = A0;
int yellow_led = A1;
int red_led = A2;
int one_second = 1000;
int half_second = 500;
int quarter_second = 250;
int eighth_second = 125;

void setup() {
  pinMode(green_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);
  pinMode(red_led, OUTPUT);

  for (int i = 0; i < 15; i++) {
    digitalWrite(green_led, HIGH);
    delay(half_second);
    digitalWrite(green_led, LOW);
    delay(half_second);
  }

  for (int i = 0; i < 30; i++) {
    digitalWrite(green_led, HIGH);
    delay(quarter_second);
    digitalWrite(green_led, LOW);
    delay(quarter_second);
  }

  for (int i = 0; i < 30; i++) {
    digitalWrite(yellow_led, HIGH);
    delay(quarter_second);
    digitalWrite(yellow_led, LOW);
    delay(quarter_second);
  }

  for (int i = 0; i < 60; i++) {
    digitalWrite(yellow_led, HIGH);
    delay(eighth_second);
    digitalWrite(yellow_led, LOW);
    delay(eighth_second);
  }
}

void loop() {
  digitalWrite(red_led, HIGH);
  delay(eighth_second);
  digitalWrite(red_led, LOW);
  delay(eighth_second);
}