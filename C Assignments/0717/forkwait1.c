/*Execute number of fork equal to number of wait*/

#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>


int main()
{
	pid_t chpid,child1,child2;
	int ii,stat;
	printf("I am in my process id %d\n",getpid());
	child1=fork();
	if(child1==0)
	{
		printf("I am first child:%d\n",getpid());
		for(ii=0;ii<6;ii++)
		{
			printf("i am in for loop\n");
			sleep(10);
		}
		return(2);
	}
	child2=fork();
	if(child2==0)
	{
		printf("I am second child:%d\n",getpid());
		for(ii=0;ii<8;ii++)
		{
			printf("i am in for loop\n");
			sleep(5);
		}
		exit(3);
	}
	chpid=wait(&stat);
	if(chpid==child1)
		printf("My first child is terminated:%d\n",WEXITSTATUS(stat));

	if(chpid==child2)
		printf("My second child is terminated:%d\n",WEXITSTATUS(stat));

	chpid=wait(&stat);
	if(chpid==child1)
		printf("My first child is created:%d\n",WEXITSTATUS(stat));

	if(chpid==child2)
		printf("My second child is created:%d\n",WEXITSTATUS(stat));
}

