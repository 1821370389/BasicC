/* 数组排序*/

#include <stdio.h>
#include <stdlib.h>
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

/* 快速排序 */
void quickSort(int array[], int start, int end)
{
    if(start >= end)
    {
        return ;
    }
    int mid = array[end];
    int left = start, right = end - 1;
    while(left < right)
    {
        while(left < right && array[left] <= mid)
        {
            left++;
        }
        while(left < right && array[right] >= mid)
        {
            right--;
        }
        swap(&array[left], &array[right]);
    }
    if(array[left] > mid)
    {
        swap(&array[left], &array[end]);
    }
    else
    {
        left++;
    }
    if(left)
    {
        quickSort(array, start, left - 1);
    }
    quickSort(array, left + 1, end);
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
#if 0
    /* 冒泡排序 */
    int temp = 0;
    for(int idx = 0; idx < ARRAYSIZE; idx++)
    {
        for(int jdx = 0; jdx < ARRAYSIZE ; jdx++)
        {
            if(array[idx] < array[jdx])
            {
                swap(&array[idx], &array[jdx]);
            }
        }
    }
#else
    /* 快速排序 */
    quickSort(array, 0, ARRAYSIZE - 1);
#endif

    /* 打印数组 */
    printArray(array, ARRAYSIZE);

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
    printArray(Array2, count);
#else
    /* 如果不需要新数组,直接打印*/
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