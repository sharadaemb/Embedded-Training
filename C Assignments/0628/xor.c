/*odd repeating nbr in series using Exclusive OR for following program*/

#include<stdio.h>

int findOdd(int arr[],int n)
{
	int res=0,i;
	for(i=0;i<n;i++)
		res ^=arr[i];
	return res;
}

int main()
{
	int arr[] = {20,20,40,40,13,13,11,88,88,98,99,11,11};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("sizeof=%d",sizeof(arr));
	printf("sizeof(arr[0])=%d ",sizeof(arr[0]));
	printf("The odd occuring element is %d ",findOdd(arr,n));
	return 0;
}
