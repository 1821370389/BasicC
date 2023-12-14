/* 2023.12.9 */
/* A，B in list；A+B=C */
/* 给定一个数组，找出两个数字之和等于目标值的下标,假定结果最多有一组 */
#include <stdio.h>

#define ARRAY_SIZE 5

int arraySum(int *array, int tonget, int size, int *outcome)
{
    for(int idx = 0; idx < size; idx++)
    {
        for(int jdx = idx + 1; jdx < size; jdx++)
        {
            if(array[idx] + array[jdx] == tonget)
            {
                outcome[0] = idx;
                outcome[1] = jdx;
                return 1;
            }
        }
    }
    return 0;
    
}

int main()
{
    /* 数组 */
    int array[ARRAY_SIZE] = {0};
    /* 目标值 */
    int tonget ;
    /* 设定数组和目标值*/
    printf("请输入数组(%d个数)：\n",ARRAY_SIZE);
    for(int idx = 0; idx < ARRAY_SIZE; idx++)
    {
        printf("请输入第%d个数：", idx+1);
        scanf("%d", &array[idx]);
    }
    printf("请输入目标值：");
    scanf("%d", &tonget);

    /* 输出结果 */
    int outcome[2];
    if (arraySum(array, tonget, sizeof(array)/sizeof(array[0]), outcome))
    {
        printf("[%d,%d]\n", outcome[0], outcome[1]);
    }
    else
    {
        printf("没有符合的结果\n");
    }

}