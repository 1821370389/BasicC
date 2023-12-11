/* 数组排序*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAYSIZE 10

int main()
{
    int array[ARRAYSIZE] = {0};

    /* 随机数组 */
    srand(time(NULL));
    for (int idx = 0; idx < ARRAYSIZE; idx++)
    {
        array[idx] = rand() % 100 + 1;
    }

    /* 冒泡排序 */
    int temp = 0;
    for(int idx = 0; idx < ARRAYSIZE; idx++)
    {
        for(int jdx = 0; jdx < ARRAYSIZE-idx ; jdx++)
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

}