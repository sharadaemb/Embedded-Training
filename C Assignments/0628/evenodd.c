/*CHcek even or odd*/

#include<stdio.h>
#define  CHECK(num)   (num&1)?printf("odd") : printf("Even");

int main()
{

   int num;

   printf("Enter number\n");
   scanf("%d",&num);

   CHECK(num);

   return 0;
}


/*OUTPUT
 * Enter number
6
Even
*/
