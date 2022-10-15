int heads_led_pin = A0;
int tails_led_pin = A1;
int buzzer_pin = A2;
int buzzer_time = 200;
int led_time = 1000;

void setup() {
  pinMode(heads_led_pin, OUTPUT);
  pinMode(tails_led_pin, OUTPUT);
  pinMode(buzzer_pin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(buzzer_pin, HIGH);
  digitalWrite(heads_led_pin, LOW);
  digitalWrite(tails_led_pin, LOW);
  delay(buzzer_time);
  digitalWrite(buzzer_pin, LOW);
  digitalWrite(heads_led_pin, HIGH);
  delay(led_time);
  digitalWrite(buzzer_pin, HIGH);
  digitalWrite(heads_led_pin, LOW);
  digitalWrite(tails_led_pin, LOW);
  delay(buzzer_time);
  digitalWrite(buzzer_pin, LOW);
  digitalWrite(tails_led_pin, HIGH);
  delay(led_time);
}