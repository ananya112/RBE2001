#include "Rangefinder.h"
#include <Arduino.h>
const int trigpin = 12;
const int echopin = 0;
long duration;
int distance;

//use quotes for your own files and <> for libraries
void Rangefinder::setup(){
pinMode(trigpin, OUTPUT); // Sets the trigPin as an Output
pinMode(echopin, INPUT);
Serial.begin(9600);
//you need to create a cpp for every header (h file)
}

void Rangefinder::loop(){
digitalWrite(trigpin, LOW);
delayMicroseconds(2);

digitalWrite(trigpin, HIGH);
delayMicroseconds(10);
digitalWrite(trigpin, LOW);

float duration = pulseIn(echopin, HIGH);
distance = duration * 0.034 / 2;
//speed of sound in air is approximately 343 meters per second
Serial.println(distance);
}


float Rangefinder::getDistanceCM(){
return distance;
}