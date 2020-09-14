#include "Chassis.h"
#include <Arduino.h>

/**
* Assume the robot drives about 12 inches / second
* Take the number of inches, divide by 12 and drive that long
 */
void Chassis::driveDistance(float inches)
{
 motors.setEfforts(100, 100);
 delay(inches / 12 * 1000);
 motors.setEfforts(0, 0);
}
/**
* Assume the robot turns at about 180 degrees per second
 */
void Chassis::turnAngle(float degrees)
{
 motors.setEfforts(100, -100);
 delay(1.0 / 180 * degrees * 1000);
 motors.setEfforts(0, 0);
} 