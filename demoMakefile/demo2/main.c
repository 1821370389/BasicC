#include <stdio.h>
extern int myadd(int a, int b);
extern int mysub(int a, int b);
extern int mymul(int a, int b);
extern int mydiv(int a, int b);
/* extern :
    
*/

int main()
{
    int num1 = 100;
    int num2 = 20;
    
    int add = myadd(num1, num2);
    printf("add = %d\n", add);
}