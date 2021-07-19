/*For child process the return avlue of fork will be zero,and for parent process the return value of fork will be process id of the child*/
/*execute both if and else loop simultaneously*/

#include<stdio.h>
#include<unistd.h>

int main()
{
	int id;
	int cnt = 0;

	printf("I am going to create a new process\n");
	id = fork();
	if(id)
	{
		while(cnt < 10)
		{
			cnt++;
			printf("I am Parent ,my child process is is %d\n",id);
		//	sleep(1);
		}
	}
	else
	{
		while(cnt < 20)
		{
			cnt++;
			printf("I am child process I got id value as %d\n",id);
		//	sleep(1);
		}
	}
}
