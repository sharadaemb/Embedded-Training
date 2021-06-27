/*Test getch,getchar,getche*/

#include<stdio.h>

void main()
{
	char c;
	printf("Enter character:");
	/*Whwn you enter a character and press enter ,the character is stored in buffer,printf function output character in buffer*/
	c=getchar();
	printf("\n Your entered character is:%c",c);

	printf("Enter getch character:");
        /*input will not show when calling print function before output the concole read a character,but not on the screen*/
        c=getch();
        printf("\n Your entered character is:%c",c);

	printf("Enter getche character:");
        /*input directly output,no need to press enter,that is the function has no buffer and the input has echo*/
        c=getche();
        printf("\n Your entered character is:%c",c);

}


/*OUTPUT
 *Testget.c:15:11: warning: implicit declaration of function ‘getch’; did you mean ‘getc’? [-Wimplicit-function-declaration]
   15 |         c=getch();
      |           ^~~~~
      |           getc
Testget.c:20:11: warning: implicit declaration of function ‘getche’; did you mean ‘getchar’? [-Wimplicit-function-declaration]
   20 |         c=getche();
      |           ^~~~~~
      |           getchar
/usr/bin/ld: /tmp/cc62PyJc.o: in function `main':
Testget.c:(.text+0x53): undefined reference to `getch'
/usr/bin/ld: Testget.c:(.text+0x88): undefined reference to `getche'
collect2: error: ld returned 1 exit status
*/




