#include "Rangefinder.h"
#include <Arduino.h>

const int trigpin = 12;
const int echopin = 0;

float pingTime;

//use quotes for your own files and <> for libraries
void Rangefinder::setup(){
//you need to create a cpp for every header (h file)

    pinMode(trigPin, OUTPUT);
    pinMode(echopin, INPUT);
    Serial.begin(9600);
}

void Rangefinder::loop(){
    digitalWrite(trigPin, LOW);
    delayMicroseconds(5);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(5);
    digitalWrite(trigPin, LOW);
}

float Rangefinder::getDistanceCM(){

float duration = pulseIn(echopin, HIGH);
float distance = duration * 0.034 / 2;
//speed of sound in air is approximately 343 meters per second
return distance;
}

