#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
    cmpc(0);
    cmpc(3);
    enable_servos();
	set_servo_position(3,1400);
    set_servo_position(0,900);
    msleep(1000);
    //motor(0,100); motor(3, 100); msleep(5000); //Moving forward
    //motor(0,-50); motor(3, -41); msleep(1500); //Moving back
    //motor(0,100); msleep(1357); 
    //motor(0,50); motor(3,-51); msleep(1357); //90 degree turn left
    motor(0,50); motor(3,-51); msleep(678.5); //45 degree turn left
    motor(0,50); motor(3,-51); msleep(678.5); //45 degree turn left

    return 0;
}
