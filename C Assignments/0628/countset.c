/*Count set bits in number*/

#include<stdio.h>

int countSetBits(int n)
{
   int count = 0;

   while(n)
   {
	   n &=(n-1);
	   count++;
   }
   return count;
}

int main()
{
	int i = 7;

	printf("%d",countSetBits(i));
	getchar();

	return 0;
}



/*OUTPUT
 * 3
 */
