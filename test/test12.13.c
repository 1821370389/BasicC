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

void mergeOrderNums(int *nums1, int numsSize1, int *nums2, int numsSize2, int *newNumSize)
{
#if 1
    int count1 = 0,count2 = 0;

    int count = 0;
    
        
        /* 有一方数组填完后跳出循环 */
        while(count1 < numsSize1 && count2 < numsSize2)
        {
            if(nums1[count1] < nums2[count2])
            {
                newNumSize[count++] = nums1[count1++];
            }
            else if(nums1[count1] > nums2[count2])
            {
                newNumSize[count++] = nums2[count2++];
            }
            /* 若两数相等，都塞进去 */
            else
            {
                newNumSize[count++] = nums1[count1++];
                newNumSize[count++] = nums2[count2++];
            }
        }
    #if 0
        /* 若数组二有剩，塞进去 */
        if(count2 != numsSize2)
        {
            for(; count2 < numsSize2; count2++)
            {
                newNumSize[count++] = nums2[count2];
            }
        }
        /* 否则，把数组一剩余的塞进去 */
        else 
        {
            for(; count1 < numsSize1; count1++)
            {
                newNumSize[count++] = nums1[count1];
                printf("2count1:%d\n",count1);
                // count++;
            }
        }
    #else
        while(count1 < numsSize1)
        {
            newNumSize[count++] = nums1[count1++];
        }
        while(count2 < numsSize2)
        {
            newNumSize[count++] = nums2[count2++];
        }
    #endif
    

#else
    int count1 = 0,count2 = 0;
    // for(int count = 0; count < numsSize1 + numsSize2; count++)
    // {
        while(count1 < numsSize1 && count2 < numsSize2)
        {
            if(*nums1 < *nums2)
            {
                *newNumSize++ = *nums1++;
                count1++;
                // count++;
            }
            else if(*nums1 > *nums2)
            {
                *newNumSize++ = *nums2++;
                count2++;
                // count++;
            }
            else
            {
                *newNumSize++ = *nums1++;
                *newNumSize++ = *nums2++;
                count1++;
                count2++;
                // count += 2;
            }
        }
        while(count1 < numsSize1)
        {
            *newNumSize++ = *nums1++;
            count1++;
            // count++;
        }
        while(count2 < numsSize2)
        {
            *newNumSize++ = *nums2++;
            count2++;
            // count++;
        }

    // }
#endif

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

    /* 创建合并数组 */
    int *newNums = (int *)malloc(sizeof(int) * (BUFF_SIZE1 + BUFF_SIZE2));
    
    /* 合并数组初始化 */
    memset(newNums, 0, sizeof(int) * BUFF_SIZE1 + BUFF_SIZE2);

    /* 合并数组排序 */
    mergeOrderNums(nums1, BUFF_SIZE1, nums2, BUFF_SIZE2, newNums);

    /* 打印合并数组 */
    printArray(newNums, BUFF_SIZE1 + BUFF_SIZE2);

    /* 释放内存 */
    if(newNums != NULL)
    {
        free(newNums);
        newNums = NULL;
    }
    return 0;
}