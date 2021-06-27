/*Simulate interrupts with function pointers*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

typedef struct
{
	char int_name[32];
	int(*isr)();
}isr_t;

//(ivt[2].isr)();

int keyboard_interrupt()
{
	printf("Connecting keyboard interrupt...\n");
}

int mouse_interrupt()
{
	printf("Mouse interrupt...\n");
}

int rtc_interrupt()
{
	printf("rtc_interrupt...\n");
}

int i2c_interrupt()
{
	printf("i2c_interrupt...\n");
}

int usb_interrupt()
{
	printf("usb_interrupt...\n");
}



isr_t ivt[]=
{
{"isr0",keyboard_interrupt},
{"isr1",mouse_interrupt},
{"isr2",rtc_interrupt},
{"isr3",i2c_interrupt},
{"isr4",usb_interrupt},
};


int main()
{
	while(1)
	{
		(ivt[rand()%5].isr)();
		sleep(1);
	}
}

/*OUTPUT 
 * i2c_interrupt....
 * Mouse interrupt....
 * rtc_interrupt...
 * Connecting keyboard interrupt...
 * i2c_interrupt..
 */
