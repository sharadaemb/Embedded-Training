/*Check nested comments are allowed or not in C*/

#include<stdio.h>
int main()
{
	printf("C's comments starts and end with specific characters");/*Extra blank line*/
	printf("You cannot put one comment inside another");
/***/      printf("this is called nesting");***/
	return 0;
}
       












/*OUTPUT
 * error: expected expression before ‘/’ token
    8 | /***/      printf("this is called nesting");***/
*/
