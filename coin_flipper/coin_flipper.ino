int heads_led_pin = A0;
int tails_led_pin = A1;
int winner_pin;
int buzzer_pin = A2;
int buzzer_time = 100;
int led_time = 1000;
int win_time = 500;
long random_number;

void setup() {
  randomSeed(analogRead(0));
  pinMode(heads_led_pin, OUTPUT);
  pinMode(tails_led_pin, OUTPUT);
  pinMode(buzzer_pin, OUTPUT);

  for (int i = 25; i >= 1; i--) {
    digitalWrite(buzzer_pin, HIGH);
    digitalWrite(heads_led_pin, LOW);
    digitalWrite(tails_led_pin, LOW);
    delay(buzzer_time);
    digitalWrite(buzzer_pin, LOW);
    digitalWrite(heads_led_pin, HIGH);
    delay(led_time / i);
    digitalWrite(buzzer_pin, HIGH);
    digitalWrite(heads_led_pin, LOW);
    digitalWrite(tails_led_pin, LOW);
    delay(buzzer_time);
    digitalWrite(buzzer_pin, LOW);
    digitalWrite(tails_led_pin, HIGH);
    delay(led_time / i);
  }

  digitalWrite(heads_led_pin, LOW);
  digitalWrite(tails_led_pin, LOW);
  digitalWrite(buzzer_pin, HIGH);
  delay(win_time);
  digitalWrite(buzzer_pin, LOW);

  random_number = random(100);

  if (random_number < 50) {
    winner_pin = heads_led_pin;
  } else {
    winner_pin = tails_led_pin;
  }
}

void loop() {
  digitalWrite(winner_pin, HIGH);
  delay(win_time);
  digitalWrite(winner_pin, LOW);
  delay(win_time);
}