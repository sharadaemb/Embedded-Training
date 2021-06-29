/*set and get number*/

#include<stdio.h>
#define SET(num,pos) num |=(1<<pos)

/*             8 4 2 1
 *     NUM     0 1 0 0
 *       OR    |  
 *       pos       1
 *       ----------------
 *             0 1 1 0
 *       ------------------*/  

int main()
{
	int num=4,pos=1;
	printf("%d",SET(num,pos));
	return 0;
}



/*OUTPUT
 * 6
 * */
