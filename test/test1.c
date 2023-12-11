/* 2023.12.9 */
/* A，B in list；A+B=C */
#include <stdio.h>

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
    int array[5];
    int tonget ;
    printf("请输入数组(5个数)：\n");
    for(int idx = 0; idx < 5; idx++)
    {
        printf("请输入第%d个数：", idx+1);
        scanf("%d", &array[idx]);
    }
    printf("请输入目标值：");
    scanf("%d", &tonget);
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