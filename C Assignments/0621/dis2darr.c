/*Display 2-D array in matrix form*/

#include<stdio.h>

int main()
{
   int disp[2][3];

   int i,j;

   for(i=0;i<2;i++)
   {
   	for(j=0;j<3;j++)
   	 {
	   printf("Enter value for disp[%d] [%d]:",i,j);
	   scanf("%d",&disp[i][j]);
	 }
    }


   printf("Two Dimentional array elements:\n");
   for(i=0;i<2;i++)
   {
	   for(j=0;j<3;j++)
	   {
		   printf("%d ",disp[i][j]);
		   if(j==2)
		   {
			   printf("\n");
		   }
	   }
   }
   return 0;
}

/*OUTPUT
 * Enter value for disp[0][0]:1
 * Enter value for disp[0][1]:2
 * Enter value for disp[0][2]:3
 * Enter value for disp[1][0]:4
 * Enter value for disp[1][1]:5
 * Enter value for disp[1][2]:6
 * Two Dimentional array elements:
 * 1 2 3
 * 4 5 6
 */

