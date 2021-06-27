/*Multiplication of 2X2 Matrix */

#include<stdio.h>
int main()
{

	int a[2][2]={{1,2},{3,4}};
	int b[2][2]={{1,3},{3,2}};

	int c[2][2];

	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
		    c[i][j] = 0;
		    for(int k=0;k<2;k++)
		    {
			    c[i][j] +=a[i][k] *b[k][j];
		    }
		}
	}

	printf("Resultant Matrix:\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d ",c[i][j]);
		}
	
	printf("\n");
	}

	return 0;
}

/*OUTPUT
 * Resultent Matrix :
 * 7 7 
 * 15 17
 */



