#include <stdio.h>  
#include <stdlib.h>
#include <string.h>
#include "calculateFunc.h"

/* 函数参数：可有可无*/
/* 函数返回值：可有可无
    没有写void
    有返回你想反悔的数据类型{int | short | char | float | double | long}
*/
#if 0
/* 无参无返回*/
void purchaseAppointThing()
{
    printf("purchase a phone\n");
}
#endif

/* 有参无返回*/
/* 函数参数一定有数据类型*/
#if 0
void myAddNum(int num1,int num2)
{
    int sum = num1 + num2;
    printf("sum = %d\n", sum);
}
#endif

/* 有参有返回*/
/* 函数参数一定有数据类型*/
#if 0
int myAddNum(int num1,int num2)
{
    int sum = num1 + num2;
    return sum;
}
#endif

/* 枚举 也是一种数据类型 */
#if 0
enum STATUS_CODE
{
    ON_SUCCESS = 0,
    ON_ERROR ,
    ON_NULLPTR,
    ON_MALLOCFAIL,
};
/* 取别名 */
typedef enum STATUS_CODE STATUS_CODE;
/* 另一种 取别名的简写 */
typedef enum STATUS_CODE
{
    ON_SUCCESS = 0,
    ON_ERROR ,
    ON_NULLPTR,
    ON_MALLOCFAIL,
}STATUS_CODE;

#endif

/* 函数指针 就是钩子函数 主要用在回调函数 */
#if 1

/* 函数*/
void printStr()
{
    printf("hello world\n");
}

#endif
int main()
{
    int choice = 0;

    /* 函数指针*/
    void (*pFunc)() = printStr;
    pFunc();

    if(choice == 1)
    {
        printStr();
    }
#if 0
    /* 函数调用 */
    purchaseAppointThing();

    int num1 = 5;
    int num2 = 6;

    /* 函数使用 */
    int totakSum =  myAddNum(num1,num2);
    
#endif

#if 0
    /* 枚举 */
    STATUS_CODE status;
    int len = sizeof(status);
    printf("len = %d\n", len);
#endif

#if 0
    int num1 = 50;
    int num2 = 60;
    int sum = calculateAdd(num1,num2);
    printf("sum = %d\n", sum);

    int sub = calculateSub(num1,num2);
    printf("sub = %d\n", sub);

    int mul = calculateMul(num1,num2);
    printf("mul = %d\n", mul);

    int div = calculateDiv(num1,num2);
    printf("div = %d\n", div);

#endif

    return 0;
}