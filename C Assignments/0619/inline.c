/* Test inline*/

#include<stdio.h>


static inline int square(int x) { return x*x; } 
int main()
{
        int x=36/square(6);
        printf("%d",x);
        return 0;
}




/*OUTPUT
 * 1
 */
