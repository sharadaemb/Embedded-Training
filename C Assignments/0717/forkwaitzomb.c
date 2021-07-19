/*program to execute fork wait and zombie system call*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>


int main()
{
  char ch;
  int exitstat;
  int cnt;
  int retval;
  printf("I am parent my PID is :%d\n",getpid());

  if(fork()==0)
  {
   while(1)
   {
     printf("I am child : my PID and PPID are %d and %d \n",getpid(),getppid());
     sleep(1);
     cnt++;
     if(cnt == 40)
     exit(25);
     }
    }
    else
    {
       while(1)
       {
        ch = getchar();
        if(ch =='c')
        printf("cnt:%d\n",cnt);
        if(ch=='x')
        exit(2);
        if(ch=='r')
	{
	  retval = wait(&exitstat);
	  printf("My second child is terminated:%d\n",WEXITSTATUS(exitstat));
	  printf("My child returned:%d\n",retval);
	}
       }
      }
}


