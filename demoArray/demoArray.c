#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 10
/*
数组：
    1.一段来纳许的存储空间。
    2.它里面存放的数据类型是相同的
*/

int main()
{

    /* 方法1：使用定义初始化 */
    int array[BUFFER_SIZE] = {0};
    
    // int array[BUFFER_SIZE] ;

    for(int idx = 0 ; idx < BUFFER_SIZE ; idx++)
    {
        printf("array[%d]=%d\n",idx,array[idx]);
    }
    int len = sizeof(array);
    printf("%d\n",len );
#if 0
    /* 地址 */
    /* 3.数组的（首）地址 和数组的首元素的地址是一样的 */
    printf("array=%p\n",array);
    printf("array[0]=%p\n",&array[0]);
    printf("array[1]=%p\n",&array[1]);
    printf("array[2]=%p\n",&array[2]);
    printf("array[9]=%p\n",&array[9]);
    printf("len:%p\n",&len);
    printf("==========\n");

    /* 方法2：使用memset函数 */
    memset(array, 0, sizeof(array));
    for(int idx = 0 ; idx < BUFFER_SIZE ; idx++)
    {
        printf("array[%d]=%d\n",idx,array[idx]);
    }
#endif
    printf("array[-1]=%d\n",array[-1]);
    printf("array[10]=%d\n",array[10]);
    return 0;
}