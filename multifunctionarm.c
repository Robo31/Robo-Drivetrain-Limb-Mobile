#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
    
    motor (2, 100);					//motor#2 starts moving.
    motor_power (0, 800); 			//motor 2 moves at 100% efficiency.
    
    
    ao();
    return 0;
}
