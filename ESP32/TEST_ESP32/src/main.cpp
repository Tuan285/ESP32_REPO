#include <Arduino.h>

#define PinLux 32
void setup()
{
  Serial.begin(115200);
}

void loop()
{
  Serial.println(analogRead(PinLux));
  delay(1000);
}
