/* Caja Fuerte para el Mateo
*/

#include <Servo.h>
Servo cerradura;

int motor = 3;
int red_led = 6;
int switch_to_close = 7;
int green_led = 10;
int switch_to_open = 11;

int delta = 5;
int open_position = 0;
int closed_position = 90;
int pos = closed_position;

void setup() {
  cerradura.attach(motor);
  cerradura.write(closed_position);
  pinMode(switch_to_open, INPUT);
  pinMode(switch_to_close, INPUT);
  pinMode(green_led, OUTPUT);
  pinMode(red_led, OUTPUT);
}

void loop() {
  if (digitalRead(switch_to_open) == HIGH) {
    digitalWrite(green_led, HIGH);
    while (pos >= open_position) {
      pos -= 1;
      cerradura.write(pos);
      delay(10);
    }
  } else {
    digitalWrite(green_led, LOW);
  }
  if (digitalRead(switch_to_close) == HIGH) {
    digitalWrite(red_led, HIGH);
    while (pos <= closed_position) {
      pos += 1;
      cerradura.write(pos);
      delay(10);
    }
  } else {
    digitalWrite(red_led, LOW);
  }
  if (pos < open_position+delta) {
    digitalWrite(green_led, HIGH);
    delay(200);
    digitalWrite(green_led, LOW);
    delay(200);
  }
  if (pos > closed_position-delta) {
    digitalWrite(red_led, HIGH);
    delay(200);
    digitalWrite(red_led, LOW);
    delay(200);
  }
}
