#include <Arduino.h>
#include <Romi32U4.h>
const int delayTime = 200;

void setup() {
  pinMode(13,OUTPUT);
}

void loop() {
  digitalWrite(12,HIGH);
  delay(delayTime);
  digitalWrite(13,LOW);
  delay(delayTime);
}