/* fork system call execute*/

#include<stdio.h>
#include<unistd.h>

int main()
{
	printf("\n i am a process my process id is %d\n",getpid());
	printf("My parents process id is %d\n",getppid());
	printf("Now i am going to create a child process by calling fork\n\n");
	fork();
	printf("My PID :%d,My parent PID : %d\n",getpid(),getppid());
}
