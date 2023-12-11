/* 数组排序*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAYSIZE 10

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

    /* 冒泡排序 */
    int temp = 0;
    for(int idx = 0; idx < ARRAYSIZE; idx++)
    {
        for(int jdx = 0; jdx < ARRAYSIZE ; jdx++)
        {
            if(array[idx] < array[jdx])
            {
                temp = array[idx];
                array[idx] = array[jdx];
                array[jdx] = temp;
            }
        }
    }

    /* 打印数组 */
    for(int idx = 0; idx < ARRAYSIZE; idx++)
    {
        printf("%d ", array[idx]);
    }
    printf("\n");

#endif

/* 数组去重 */
#if 0
    /* 测量新数组的长度 */
    int count = 0;
    for(int idx = 0; idx < ARRAYSIZE; idx++)
    {
        if(array[idx] != array[idx+1])
        {
            count++;
        }
    }
    /* 创建新数组 */
    int *Array2 = (int *)malloc(count * sizeof(int));
    count = 0;
    for(int idx = 0; idx < ARRAYSIZE; idx++)
    {
        if(array[idx] != array[idx+1])
        {
            Array2[count] = array[idx];
            count++;
        }
    }
    
    /* 打印新数组 */
    for(int idx = 0; idx < count; idx++)
    {
        printf("%d ", Array2[idx]);  //打印新数组的长度  
    }
    printf("\n");
#else
    /* 如果不需要新数组的话*/
    for(int idx = 0; idx < ARRAYSIZE; idx++)
    {
        if(array[idx] != array[idx+1])
        {
            printf("%d ", array[idx]);
        }
    }
    printf("\n");

#endif
}