#include <Arduino.h>
#include <Romi32U4.h>
#include <Chassis.h>
Romi32U4Motors motors;
void setup() {
  // put your setup code here, to run once:
}
//hopefully I did this right
void loop() {
  motors.setEfforts(100,100);
  delay(1000);
  motors.setEfforts(0,0);
  delay(1000);
  // put your main code here, to run repeatedly:
}