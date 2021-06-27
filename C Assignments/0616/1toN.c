/*Print 1 to N recrusion*/

#include<stdio.h>

void display(int num)
{
	if(num)
		display(num-1);
	else
		return;

	printf("\n%d\n",num);
}

int main()
{
	int nnum;
	printf("Enter the number of terms to be printed\n");
	scanf("%d",&nnum);
	display(nnum);
}


/*OUTPUT
 *
 * Enter the number of terms to be printed
4

1

2

3

4
*/

