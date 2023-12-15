#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE  5

int mystrcmp(const char* str1, const char* str2)
{
    while(*str1 == *str2)
    {
        if(*str1 == '\0')
        {
            return 0;
        }
        str1++;
        str2++;
    }
    return *str1 - *str2;

}

void task()
{
#if 0
    /* 作业1 */
    int array[BUFFER_SIZE] = {1, 2, 3, 4, 5};
    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d] = %d\n", idx, array[idx]);
    }
    printf("\n");
    char array2[BUFFER_SIZE] = {'a', 'b', 'c', 'd', 'e'};
    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array2[%d] = %c\n", idx, array2[idx]);
    }
    printf("\n");
#endif
#if 1
    char *array3[BUFFER_SIZE] = {"hello","world","zhangsan","lisi","wangwu"};
    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array3[%d] = %s\n", idx, array3[idx]);
    }

    /* 作业 将数组arrar3排序 */
    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        for(int jdx = 0; jdx < BUFFER_SIZE - 1; jdx++)
        {
            // printf("交换前：");
            // printf("array3[%d]:%p\n", jdx, array3[jdx]);
            if(mystrcmp(array3[jdx], array3[jdx + 1]) > 0)
            {
                char *temp = array3[jdx];
                // printf("array3[%d]:%p\n", jdx, array3[jdx]);
                array3[jdx] = array3[jdx + 1];
                array3[jdx + 1] = temp;
                // printf("array3[%d]:%p\n", jdx, array3[jdx]);
            }
            // printf("交换后：");
            // printf("array3[%d]:%p\n", jdx, array3[jdx]);
        }
    }
    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array3[%d] = %s\n", idx, array3[idx]);
    }
#endif

}

/* 数组的特性之一：存放相同的数据类型 */
int main(int argc, const char *argv[])
{

#if 1
    task();
#endif
    return 0;
}