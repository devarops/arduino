#include <Keyboard.h>
// Defining each pin, with a unique name
int KEY_P = 2;
int KEY_O = 0;
int KEY_I = 1;
int KEY_U = 10;
int KEY_J = 9;
int KEY_K = 14;
int KEY_L = 15;
int KEY_SCOLON = 16;
int DELAY = 1000;
long random_number;

String people[] = {
  ":evaristo:",
  ":nepo:",
  ":fernando:",
  ":maritza:",
  ":xavier:"
};

void setup() {
  randomSeed(analogRead(0));
  pinMode (KEY_P, INPUT_PULLUP);
  pinMode (KEY_O, INPUT_PULLUP);
  pinMode (KEY_I, INPUT_PULLUP);
  pinMode (KEY_U, INPUT_PULLUP);
  pinMode (KEY_J, INPUT_PULLUP);
  pinMode (KEY_K, INPUT_PULLUP);
  pinMode (KEY_L, INPUT_PULLUP);
  pinMode (KEY_SCOLON, INPUT_PULLUP);

  //starting the strip
  Keyboard.begin();
}

void loop() {
  if (digitalRead(KEY_P) == LOW)
  {
    Keyboard.print(":grinning:");
    delay(DELAY);
    Keyboard.press(KEY_RETURN);
  }
  if (digitalRead(KEY_P) == HIGH)
  {
    Keyboard.releaseAll();
  }
  if (digitalRead(KEY_O) == LOW)
  {
    Keyboard.print(":+1::skin-tone-5:");
    delay(DELAY);
    Keyboard.press(KEY_RETURN);
  }
  if (digitalRead(KEY_O) == HIGH)
  {
    Keyboard.releaseAll();
  }
  if (digitalRead(KEY_I) == LOW)
  {
    Keyboard.print(":v::skin-tone-5:");
    delay(DELAY);
    Keyboard.press(KEY_RETURN);
  }
  if (digitalRead(KEY_I) == HIGH)
  {
    Keyboard.releaseAll();
  }
  if (digitalRead(KEY_U) == LOW)
  {
    Keyboard.print(":raised_hands::skin-tone-5:");
    delay(DELAY);
    Keyboard.press(KEY_RETURN);
  }
  if (digitalRead(KEY_U) == HIGH)
  {
    Keyboard.releaseAll();
  }
  if (digitalRead(KEY_J) == LOW)
  {
    
    random_number = random(5);
    Keyboard.print(people[random_number]);
    delay(DELAY);
    Keyboard.press(KEY_RETURN);
  }
  if (digitalRead(KEY_J) == HIGH)
  {
    Keyboard.releaseAll();
  }
  if (digitalRead(KEY_K) == LOW)
  {
    Keyboard.print(":fernando:");
    delay(DELAY);
    Keyboard.press(KEY_RETURN);
  }
  if (digitalRead(KEY_K) == HIGH)
  {
    Keyboard.releaseAll();
  }
  if (digitalRead(KEY_L) == LOW)
  {
    Keyboard.print(":maritza:");
    delay(DELAY);
    Keyboard.press(KEY_RETURN);
  }
  if (digitalRead(KEY_L) == HIGH)
  {
    Keyboard.releaseAll();
  }
  if (digitalRead(KEY_SCOLON) == LOW)
  {
    Keyboard.print(":xavier:");
    delay(DELAY);
    Keyboard.press(KEY_RETURN);
  }
  if (digitalRead(KEY_SCOLON) == HIGH)
  {
      Keyboard.releaseAll();
  }
}
