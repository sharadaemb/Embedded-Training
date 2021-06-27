/*Check Array is sorted or not*/

#include<stdio.h>

int check(int array[],int n);

int main()
{
	int n,array[10],i;

	printf("\n Enter the value of the n:");
	scanf("%d",&n);

	printf("\n Enter the array elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("\n\n");

	if(check(array,n-1))
	{
	printf("\n Array is sorted");
	}
	else
	{
	printf("\n Array is not sorted");
	}
	return 0;
}

int check(int array[],int n)
{
  if(n==0)
  {
	return 1;
  }
  else
  {
    if(array[n] > array[n-1])
     {
	return check(array,n-1);
     }
    else
    {
	    return 0;
    }
   }
}


/*OUTPUT 
 * Enter the value of the n:6
 * Enter the array elements:
 * 10 3 2 7 30 10
 * Array is not sorted*/
