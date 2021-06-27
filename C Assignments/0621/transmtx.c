/*Transpose of a matrix*/

#include<stdio.h>

int main()
{
	int r,c,i,j,matrix[10][10],transpose[10][10];

	printf("Enter rows and columns :\n");
	scanf("%d%d",&r,&c);

	printf("Enter elements of the matrix\n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&matrix[i][j]);

	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		transpose[j][i] = matrix[i][j];

	printf("Transpose of the matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d\t",transpose[i][j]);
	         printf("\n");
	}
        return 0;
}

/*OUTPUT
 * Enter rows and columns :
 * 3 3
 * Enter elements of the matrix
 * 1 2 3
 * 4 5 6
 * 7 8 9
 * Transpose of the matrix:
 * 1 4 7
 * 2 5 8
 * 3 6 9
 */
