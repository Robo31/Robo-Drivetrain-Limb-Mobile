#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
    
    motor (0, 100);					//motor #0 moves forward.
    motor (1, 100);					//motor #1 moves forward.
    msleep (2000);					//waits 2 sec.
    
    motor (0, 100);					//lego robo moves to the left.
    motor (1, 50);
    msleep (2000);
    
    motor (0, 50);					//lego robo moves to the right.
    motor (1, 100);
    msleep (2000);
    
    ao();							//lego robot stops moving.
    
    
    motor (2, 100);					//motor#2 starts moving.
    motor_power (0, 100); 			//motor32 moves at 100% efficiency.
    
    
    ao();
    return 0;
}
    

    
    
