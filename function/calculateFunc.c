#include "calculateFunc.h"
#include <stdio.h>
/* 源文件(.c)是很熟的实现*/

typedef enum STATUS_CODE
{
    ON_SUCCESS,
    ON_ERROR,
    ON_NULLPTR,
    ON_MALLOCFAIL,
    ON_INVALIDACCESS,
} STATUS_CODE;

/* 加法 */
int calculateAdd(int num1, int num2)
{
    return num1 + num2;
}

/* 减法 */
int calculateSub(int num1, int num2)
{
    return num1 - num2;  
}

/* 乘法 */
int calculateMul(int num1, int num2)
{
    return num1 * num2;
}

/* 除法 */
int calculateDiv(int num1, int num2)
{
    if (num2 == 0)
    {
        return ON_INVALIDACCESS;
    }
    return num1 / num2;
}
