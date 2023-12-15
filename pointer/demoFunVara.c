#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define BUFFER_SIZE 10
#define BUFFER_OFFSET 97
/* 函数 
    1.函数参数
*/
/* 函数参数
    1.形式参数
*/
/* 需求:实现两个数的交换 */
#if 0
/* 值传递 */
void swapSurfaceData(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("affer:num1:%d,num2:%d\n", a, b);
}
#else
/* 地址传递 */
void swap(int *a, int *b)
{
    int temp = *a;  //*temp = (&num1)
    *a = *b;        //*(&num1) = *(&num2)
    *b = temp;      //*(&num2) = temp
    printf("affer:num1:%d,num2:%d\n", *a, *b);
}
#endif

/* 数组作函数参数会自动弱化位指针 */
void printArray(int *array[],int size)
{
    for(int idx = 0; idx < size; idx++)
    {
        printf("%d ", array[idx]);
    }
    printf("\n");
}


int main()
{
    int num1 = 10;
    int num2 = 20;

    swap(&num1, &num2);
    printf("num1 = %d, num2 = %d\n", num1, num2);
    
    int array[BUFFER_SIZE]={0};
    int elementNum = sizeof(array)/sizeof(array[0]);
    printf("elementNum = %d\n", elementNum);

    for(int idx = 0; idx < elementNum; idx++)
    {
        array[idx] = idx+BUFFER_OFFSET;
    }

    printArray(array, elementNum);
    for(int idx = 0; idx < elementNum; idx++)
    {
        printf("array[%d] = %d ", idx, array[idx]);
    }
    printf("\n");
}