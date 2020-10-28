#include "Chassis.h"

/**
* Assume the robot drives about 12 inches / second
* Take the number of inches, divide by 12 and drive that long
 */


void Chassis::driveDistance(float inches)
{
float ticks = (float)((diameter*M_PI)/CPR);//This is inch per ticks constant

encoders.getCountsAndResetLeft();
encoders.getCountsAndResetRight();
while((encoders.getLeftCounts()<(ticks)*inches)&&(encoders.getRightCounts()<(ticks)*inches)){    
 motors.setEfforts(100, 100);
}
 motors.setEfforts(0, 0);
}
/**
* Assume the robot turns at about 180 degrees per second
* Also assumes the point of rotation is directly in between the wheels
 */
void Chassis::turnAngle(float degrees)
{
    float degpertick = (float)(wheelTrack*M_PI*(wheelDiameter*M_PI)/2/CPR);//Obviously degrees per tick
    encoders.getCountsAndResetLeft();
    encoders.getCountsAndResetRight();
    while((encoders.getLeftCounts()<degpertick*degrees)&&(encoders.getRightCounts()<degpertick*degrees)){
 motors.setEfforts(100, -100);
    }
    motors.setEfforts(0, 0);
} 
