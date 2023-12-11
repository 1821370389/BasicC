#include <stdio.h>
#include <stdlib.h>


int printString()
{
    int ret = 0;
    printf("print string\n");
    return ret;
}
int main()
{
    int num1 = 10;
    printf("num1 = %d\n", num1);
    printString();
    return 0;
}
/*
编译过程
gcc -E main .c >main.i
gcc -S main.i
gcc -c main.s
gcc main.o 
*/