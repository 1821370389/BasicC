#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 值传递和地址传递 */
#if 0
/* 函数参数 又叫做形参 */
/* 值传递 
    当函数的参数没有指针时就是值传递
    要想改变实参的值就要地址传递
*/
void swapDate(int val1, int val2)
{
    int temp = val1;
    val1 = val2;
    val2 = temp;

    return;
}
/* 地址传递 */
/* 当我们的整数做形参的时候，一定是传出参数*/
void swapRealDate(int *pval1, int *pval2)
{
    int temp = *pval1;
    *pval1 = *pval2;
    *pval2 = temp;
}

int main()
{
    int num1 = 100;
    int num2 = 200;

    /* 调用函数的参数叫做实参 */
    swapDate(num1, num2);
    printf("num1 = %d\t num2 = %d\n", num1,num2);

    /* 传出参数就是一定会改变实参的值的，(要想改变实参的值就一定要) */
    swapRealDate(&num1, &num2);
    printf("num1 = %d\t num2 = %d\n", num1,num2);
}
#endif



#if 0
/* 什么叫传入参数？ 不知道！ */
/* 什么时候用传入参数
    当你不想改变实参的时候，就用传入参数(就用const限制)
*/
void printStr(char *str)
{
    printf("before:%s\n", str);
    // *str = 'H';
    // printf("after%s\n", str);
    return;
}
/* 
    conclusion:
    字符串：形参不加const就是传出参数(就是要被修改的值)。
        加上const就是传入参数(不能被改变)
    整数：加上指针就是传出参数(就是要被修改的值),不加指针就是传入参数(能被修改，不影响实参)
*/

int main()
{
    char *str = "hello world";
    printStr(str);

    return 0;
}
#endif

#if 1

int main()
{

}
#endif
