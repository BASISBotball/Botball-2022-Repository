#include <stdio.h>
#include <kipr/wombat.h>
#include <string.h>
#define M_PI 3.14159265358979323846

void calibrate_gyro()
{
  int i = 0;
  double avg = 0;
  while(i < 50)
  {
    avg += gyro_z();
    msleep(1);
    i++;
  }
  bias = avg / 50.0;
  printf("New Bias: %f\n", bias);
}

void find_angle(){
  double theta = 0;
  while(1 == 1){
    msleep(10);
    theta += (gyro_z() - bias)*10;
  }
}

//dir is 0 for right and 1 for left
//angle is in degrees
void turning(double angle, int dir)
{
if(dir == 0){
    motor(0,-50); motor(3,50); msleep(1357.0*(angle/90.0)); //angle degree turn right
}
if(dir == 1){
    motor(0,50); motor(3,-50); msleep(1357.0*(angle/90.0)); //angle degree turn left
    }
}

int main() {
double angle1 = 90.0;
int dir1 = 1;
turning(angle1, dir1);
return 0;
}
