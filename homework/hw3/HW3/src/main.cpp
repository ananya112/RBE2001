#include <Arduino.h>
#include <Rangefinder.h>
Rangefinder rangefinder;

void setup() {
    rangefinder.setup();
    Serial.begin(9600);
}

void loop() {
  rangefinder.loop();
  robot.drive(50);

  if(rangefinder.getDistanceCM() <20){
    robot.halt();
    delay(250);
    robot.turnAngle(100);
    delay(250);
  }


}