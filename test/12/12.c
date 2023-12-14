/* 删除数组中的特定值 */
/* 删除数组中重复出现过的数字  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define ARRAYSIZE 10


/* 交换两个数 */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* 打印数组 */
void printArray(int array[], int size)
{
    for(int idx = 0; idx < size; idx++)
    {
        printf("%d ", array[idx]);
    }
    printf("\n");
}

/* 删除特定元素 */
int deleteValue(int array[], int size, int deleteValue)
{
    /* 计数 */
    /* 要删除数字的个数 */
    int count = 0;
    /* 遍历计数*/
    int idx = 0;

    while(idx + count < size)
    {
        array[idx] = array[idx + count];
        if(array[idx] == deleteValue)
        {
            count++;
        }
        else
        {
            idx++;
        }
    }
    /* 返回删完后数组的大小 */
    return size - count;
}

int main()
{
#if 1
    int array[ARRAYSIZE] = {0};

    /* 随机数组 */
    srand(time(NULL));
    for (int idx = 0; idx < ARRAYSIZE; idx++)
    {
        array[idx] = rand() % 20 + 1;
    }
    printArray(array, ARRAYSIZE);

#endif

#if 0
    /* 删除特定数字 */
    int count = 0;
    int deleteValue = 2;
    int idx = 0;
    while(idx + count < ARRAYSIZE)
    {
        array[idx] = array[idx + count];
        if(array[idx] == deleteValue)
        {
            count++;
        }
        else
        {
            idx++;
        }
    }
#endif
#if 0
    int * ptr,idx = 0;
    ptr = array;
    while(idx + count < ARRAYSIZE)
    {
        *ptr = *(ptr+count);
        if(*ptr == deleteValue)
        {
            count++;
        }
        else
        {
            ptr++;
            idx++;
        }
    }
    printArray(array, ARRAYSIZE - count);
    printArray(array, ARRAYSIZE);
#endif
#if 0
    int j=0;
    for(int idx = 1; idx < ARRAYSIZE; idx++)
    {
        if(array[idx] != array[j])
        {
            array[++j] = array[idx];
        }
        printArray(array, j);
    }
#endif

#if 1
    int count = 0;
    int size = ARRAYSIZE;
    for(int idx = 0; idx < size; idx++)
    {
        for(int jdx = idx + 1; jdx < size; jdx++)
        {
            if(array[idx] == array[jdx])
            {
                size = deleteValue(array, size, array[idx]);
            }
        }
        printArray(array, ARRAYSIZE);
    }
    printArray(array, size);
#endif
    return 0;
}