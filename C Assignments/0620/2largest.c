#include<stdio.h>

int main()
{
	int array[10] = {90,20,30,4,28,56,3,22,88,7};
	int i,largest,second;

	if(array[0] > array[1])
	{
		largest = array[0];
		second  = array[1];
	}
	else
	{
		largest = array[1];
		second  = array[0];
	}

	for(i=2;i<10;i++)
	{
		if(largest <array[i])
		{
			second = largest;
			largest = array[i];
		}
		else
			if(second < array[i])
			{
				second = array[i];
			}
	}

	printf("Largest - %d\n Second - %d\n",largest,second);

	return 0;
}


/*OUTPUT
 * largest - 90
 * second - 88
 * */
