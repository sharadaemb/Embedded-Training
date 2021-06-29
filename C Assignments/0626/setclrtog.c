/* Program to CLEAR,SET and TOGGLE*/

#include<stdio.h>
#define SET(num,pos)      num =num | (1<<pos)
#define CLEAR(num,pos)    num =num & (~(1<<pos))
#define TOGGLE(num,pos)   num =num ^ (1<<pos)


/*             8 4 2 1      SET           CLEAR          TOGGLE
 *        num  0 1 0 0    0 1 0 0        0 1 0 0       0 1 0 0
 *        pos      1          1              1     ~ ( 1 1 0 1)    pos( 0 0 1 0)
 *                      |             &              ^  
 *        -------------------------------------------------------
 *                        0 1 1 0        0 0 0 0       1 0 0 1
 *       --------------------------------------------------------
 */

int main()
{
	int num,pos;

	printf("Enter number:");
	scanf("%d",&num);

	printf("Enter number of pos:");
	scanf("%d",&pos);

	printf("Set=%d\n",SET(num,pos));

	printf("Clear=%d\n",CLEAR(num,pos));

	printf("Toggle=%d\n",TOGGLE(num,pos));

	return 0;
}



