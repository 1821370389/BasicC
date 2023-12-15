#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 5
#define ROW_SIZE 3
#define COL_SIZE 4


/* 从一维数组到二维数组 */
#if 1
int main()
{
    int array[BUFFER_SIZE] = {0};
    int size = sizeof(array);
    printf("size = %d\n", size);

    /* 二维数组的定义 */
    int array2[ROW_SIZE][COL_SIZE] = {0};
    size = sizeof(array2);
    printf("size = %d\n", size);

    /* 二维数组的赋值  */
    #if 1
    array2[0][0] = 100;
    printf("array2[0][0] = %d\n", array2[0][0]);

    int count = 1;
    for(int idx = 0; idx < ROW_SIZE; idx++)
    {
        for(int jdx = 0; jdx < COL_SIZE; jdx++)
        {
            array2[idx][jdx] = count++;
        }
    }
    #endif

    /* 二维数组的取值 */
    #if 0
    for(int idx = 0; idx < ROW_SIZE; idx++)
    {
        for(int jdx = 0; jdx < COL_SIZE; jdx++)
        {
            printf("array2[%d][%d] = %d\t", idx, jdx, array2[idx][jdx]);
        }
        printf("\n");
    }
    printf("\n");
    #endif

    /* 二维数组的地址 */
    #if 0
    printf("array2 = %p\n", array2);
    for(int idx = 0; idx < ROW_SIZE; idx++)
    {
        for(int jdx = 0; jdx < COL_SIZE; jdx++)
        {
            printf("&array2[%d][%d] = %p\n", idx, jdx, &array2[idx][jdx]);
        }
    }
    #endif
    printf("array[1]:%p\n",array2[1]);
    printf("array[1][0]:%p\n",&array2[1][0]);
    printf("array + 1:%p\n",array2 + 1);


    /* 数组即指针 */
    //array2[2] == *(array2 + 2);

    printf("array2[2][2] = %d\t *(*(array2+2)+2) = %d\n", array2[2][2],*(*(array2+2)+2));
}
#endif
/* 作业：
    二维数组的翻转

*/