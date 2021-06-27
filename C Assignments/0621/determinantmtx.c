/*Find determinant of a matrix*/

#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	long determinant = 0;

	printf("Enter the 9 elements of matrix: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("\n The First matrix is\n");
	for(i=0;i<3;i++)
	{
		printf("\n");
	        for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}

	determinant = a[0][0]*((a[1][1]*a[2][2])-(a[2][1]*a[1][2]))-
		a[0][1]*(a[1][0]*a[2][2] - a[2][0]*a[1][2]) +
		a[0][2]*(a[1][0]*a[2][1] - a[2][0]*a[1][1]);

        printf("\n Determinant of 3X3 matrix : %ld",determinant);

	return 0;

}

/*OUTPUT
 * Enter the 9 elements of matrix: 1
 * 2
 * 3
 * 4
 * 5
 * 6
 * 7
 * 8
 * 9
 *
 * The First matrix is 
 *
 * 1   2  3
 * 4   5  6
 * 7   8  9
 *
 * Determinant of 3X3 matrix is :0
 */

