#include <Arduino.h>
int LEDS [] = {15,2,4,16,17,5,18,19};

void ConfigPlaca()
{
  for(int i = 0; i <= 7; i++)
  {
    pinMode(LEDS[i], OUTPUT); // pino sáida
    digitalWrite(LEDS[i],0);  // reset
  }
}

void PiscaLED()
{
  for(int i = 0; i <= 7; i++)
  {
    // sequencial de LEDs D1 até D8 (200ms)
    digitalWrite(LEDS[i],1); // liga sequencialmente
    delay(200);
  }
  for(int i = 0; i <= 7; i++)
  {
    // sequencial de LEDs D1 até D8 (200ms)
    digitalWrite(LEDS[i],0); // desliga sequencialmente
    delay(200);
  }
}

void setup()
{
  ConfigPlaca();
}

void loop()
{
  PiscaLED();
}