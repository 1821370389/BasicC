/* 二维数组转置 */

#if 0
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define ROWS 3
#define COLS 4

void transpose(int rows, int cols, int array[rows][cols],int newArray[cols][rows])
{

    
    for (int idx = 0; idx < rows; ++idx) {

        for (int jdx = 0; jdx < cols; ++jdx) 
        {
            newArray[jdx][idx] = array[idx][jdx];
        }
    }
}


int main()
{

    int array[ROWS][COLS] = {0};
    srand(time(NULL));
    for(int idx = 0; idx < ROWS; idx++)
    {
        for(int jdx = 0; jdx < COLS; jdx++)
        {
            array[idx][jdx] = rand() % 10 + 1;
        }
    }
    printf("原数组为:\n");
    for(int idx = 0; idx < ROWS; idx++)
    {
        for(int jdx = 0; jdx < COLS; jdx++)
        {
            printf("%d ", array[idx][jdx]);
        }
        printf("\n");
    }
    int  newArray[COLS][ROWS] ;
    transpose(ROWS, COLS, array,newArray);
    printf("转置后的数组为:\n");
    for(int idx = 0; idx < COLS; idx++)
    {
        for(int jdx = 0; jdx < ROWS; jdx++)
        {
            printf("%d ", newArray[idx][jdx]);
        }
        printf("\n");
    }

}
#endif

/* 炒股购买利益最大化，只能买卖一次 （最大差值）*/
#if 1
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 7


int main()
{
    int array[BUFFER_SIZE] = {7,1,4,2,5,6,3};
    int max = 0;
    int maxDay[2] = {0,0}; 
    for (int idx = 0; idx < BUFFER_SIZE; ++idx)
    {
        for (int jdx = idx + 1; jdx < BUFFER_SIZE; ++jdx)
        {
            if(array[jdx] - array[idx] > max)
            {
                max = array[jdx] - array[idx];
                maxDay[0] = idx + 1;
                maxDay[1] = jdx + 1;
            }
        }
    }
    printf("最大差值为:%d\n", max);
    printf("最大差值的两天为:%d %d\n", maxDay[0], maxDay[1]);
}

#endif