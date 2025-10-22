#include <Arduino.h>

#define Bot1 14
#define Bot2 12
#define Bot3 13

int LEDS[] = {15, 2, 4, 16, 17, 5, 18, 19};
int Bots[] = {13, 12, 14};

int Liga1[] = {1, 0, 1, 0, 1, 0, 1, 0};
int Liga2[] = {0, 1, 0, 1, 0, 1, 0, 1};
int Liga3[] = {0, 0, 0, 0, 0, 0, 0, 0};

void ConfigPlaca() {
  for (int i = 0; i <= 7; i++) {
    pinMode(LEDS[i], OUTPUT);     // pino output
    digitalWrite(LEDS[i], 0);     // reset pino
  }

  for (int i = 0; i <= 2; i++) {
    pinMode(Bots[i], INPUT_PULLUP); // pino input-pullup
  }
}

void ControleLEDs() {
  if (digitalRead(Bot1) == 0) { // Leitura Bot1
    for (int i = 0; i <= 7; i++) {
      digitalWrite(LEDS[i], Liga1[i]);
    }
  }

  if (digitalRead(Bot2) == 0) { // Leitura Bot2
    for (int i = 0; i <= 7; i++) {
      digitalWrite(LEDS[i], Liga2[i]);
    }
  }

  if (digitalRead(Bot3) == 0) { // Leitura Bot3
    for (int i = 0; i <= 7; i++) {
      digitalWrite(LEDS[i], Liga3[i]);
    }
  }
}

void setup() {
  ConfigPlaca();
}

void loop() {
  ControleLEDs();
}
