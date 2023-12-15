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

/* 地址传递 */
void swap(int *a, int *b)
{
    int temp = *a;  //*temp = (&num1)
    *a = *b;        //*(&num1) = *(&num2)
    *b = temp;      //*(&num2) = temp
    printf("affer:num1:%d,num2:%d\n", *a, *b);
}
int main()
{
    int num1 = 10;
    int num2 = 20;

    swap(&num1, &num2);
    printf("num1 = %d, num2 = %d\n", num1, num2);
}
#endif

/* 数组作函数参数会自动弱化位指针 */
#if 0
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
#endif
/* 数组作函数返回值 */
#if 1

int *mergOrderNums(int *num1,int num1Len,int *num2,int num2Len,int *newSize)
{
    int arrayLen = num1Len + num2Len;
    int *newArray = (int *)malloc(arrayLen * sizeof(int));

    if(newArray == NULL)
    {
        return NULL;
    }
    int idx1 = 0;
    int idx2 = 0;
    int pos = 0;
    while (idx1 < num1Len && idx2 < num2Len)
    {
        if(num1[idx1] < num2[idx2])
        {
            newArray[pos++] = num1[idx1++];
        }
        else if(num1[idx1] > num2[idx2])
        {
            newArray[pos++] = num2[idx2++];
        }
        else
        {

        }
        if(idx1 == num1Len)
        {
            for(int idx = idx2; idx < num2Len; idx++)
            {
                newArray[pos++] = num2[idx2++];
            }
        }
        else if (idx2 == num2Len)
        {
            for(int idx = idx1; idx < num1Len; idx++)
            {
                newArray[pos++] = num1[idx1++];
            }
        }
        *newSize = arrayLen;
        return newArray;
        
    }
    
    return 0;
}

int main()
{
    int num1[] = {1,2,3,4,5};
    int num2[] = {6,7,8,9,10};

    int num1Len = sizeof(num1)/sizeof(num1[0]);
    int num2Len = sizeof(num2)/sizeof(num2[0]);

    int newSize = 0;
    int *newArray = mergOrderNums(num1,num1Len,num2,num2Len,&newSize);

    for(int idx = 0; idx < newSize; idx++)
    {
        printf("newArray[%d] = %d\t%d\n", idx, newArray[idx], *(newArray + idx));
    }
}

#endif