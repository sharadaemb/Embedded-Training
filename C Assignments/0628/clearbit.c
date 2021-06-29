/*clear bit*/

#include<stdio.h>
#define CLEAR(num,pos) num &= (~(1<<pos))
/*
            8 4 2 1
       num  0 1 2 1
       AND  &
       pos       1
      -----------------
            0 0 1 0
	   ------------- 

*/

int main()
{
	int num=7,pos=1;
	printf("%d",CLEAR(num,pos));
}



