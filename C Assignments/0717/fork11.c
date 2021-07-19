/*parent and child process execution*/

#include<stdio.h>
#include<unistd.h>

static int global = 10;
int main()
{
	int id;
	int cnt=0;
	printf("I am going to create new process\n");
//	myfunc();
	id = fork();
	if(id)
	{
		while(cnt<50)
		{
			cnt++;
			printf("I am in parent,my child process is %d\n",id);
			printf("Parent global:%d\n",global);
			global++;
			printf("Parent global :%d\n",global);
			sleep(4);
		}
	}
	else
	{
		while(cnt<20)
		{
			cnt++;
			printf("child global:%d\n",global);
			printf("I am in child process is %d\n",id);
			sleep(4);
		}
	}
}
