/* 
非连续有序数组的合并
要求使用malloc
函数名为
mergeOrderNums(int *nums1, int numsSize1, int *nums2, int numsSize2, int *newNumSize)
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


#define BUFF_SIZE1  10
#define BUFF_SIZE2  10


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
void quickSort(int *array, int start, int end)
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


/* 合并有序数组 */
int *mergeOrderNums(int *nums1, int numsSize1, int *nums2, int numsSize2, int *newNumSize)
{
    /* 计算新数组大小 */
    *newNumSize = numsSize1 + numsSize2;
    /* 为新数组开辟空间 */
    int * newNum = (int *)malloc(sizeof(int) * (numsSize1 + numsSize2));
    /* 初始化新数组 */
    memset(newNum, 0, sizeof(int) * *newNumSize);
    /* 旧数组计数的临时变量 */
    int count1 = 0,count2 = 0;
    /* 便利新数组的临时指针 */
    int *temp = newNum;
    /* 任意一个旧数组遍历完后跳出循环 */
    while(count1 < numsSize1 && count2 < numsSize2)
    {
        if(*nums1 < *nums2)
        {
            *temp++ = *nums1++;
            count1++;
        }
        else if(*nums1 > *nums2)
        {
            *temp++ = *nums2++;
            count2++;
        }
        else
        {
            *temp++ = *nums1++;
            *temp++ = *nums2++;
            count1++;
            count2++;
        }
    }
    /* 将剩余一个数组遍历完 */
    while(count1 < numsSize1)
    {
        *temp++ = *nums1++;
        count1++;
    }
    while(count2 < numsSize2)
    {
        *temp++ = *nums2++;
        count2++;
    }
    /* 返回新数组的地址 */
    return newNum;
}


int main()
{
    /* 生成随机种子 */
    srand(time(NULL));

    /*创建并初始化两个数组 */
    int nums1[BUFF_SIZE1] = {0};
    int nums2[BUFF_SIZE2] = {0};

    /* 随机填充数组 */
    for(int i = 0; i < BUFF_SIZE1; i++)
    {
        nums1[i] = rand() % 100+1;
    }
    for(int i = 0; i < BUFF_SIZE2; i++)
    {
        nums2[i] = rand() % 100+1;
    }

    /* 数组排序 */
    quickSort(nums1, 0, BUFF_SIZE1 - 1);
    quickSort(nums2, 0, BUFF_SIZE2 - 1);

    /* 打印数组 */
    printArray(nums1, BUFF_SIZE1);
    printArray(nums2, BUFF_SIZE2);

    /* 合并后数组的大小 */
    int *newNumsSize = NULL;
    newNumsSize = (int *)malloc(sizeof(int));

    /* 合并数组排序 */
    int * newNums = mergeOrderNums(nums1, BUFF_SIZE1, nums2, BUFF_SIZE2, newNumsSize);

    /* 打印合并数组 */
    printArray(newNums, *newNumsSize);

    /* 释放内存 */
    if(newNums != NULL)
    {
        free(newNums);
        newNums = NULL;
    }
    if(newNumsSize != NULL)
    {
        free(newNumsSize);
        newNumsSize = NULL;
    }
    return 0;
}