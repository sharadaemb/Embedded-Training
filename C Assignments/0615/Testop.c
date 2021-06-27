/*Test output*/

#include <stdio.h>
int main()
{
	int x=10,y=3;
	{
		int x=100,z=10;
		printf("%d%d",x,z);
	}
	printf("%d%d",x,z);
}



/*OUTPUT
 * Testop.c: In function ‘main’:
Testop.c:11:18: error: ‘z’ undeclared (first use in this function)
   11 |  printf("%d%d",x,z);
      |                  ^
Testop.c:11:18: note: each undeclared identifier is reported only once for each function it appears in
*/
