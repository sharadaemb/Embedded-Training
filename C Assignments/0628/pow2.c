/* Power of 2 */

#include<stdio.h>

int isPowerof2(int x)
{
	return (x && !(x&x-1));
}

int main()
{
	printf("%d",isPowerof2(16));
	 return 0;
}




/*OUTPUT
 * 1
 */
