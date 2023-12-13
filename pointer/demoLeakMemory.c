#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFF_SIZE 10

/* 内存泄漏 3种场景
    1.野指针
    2.malloc出的对空间没释放
    3.踩内存(读写了不该读写的内存)
*/

int main()
{
    /* Q1. 什么情况下会导致内存泄漏 */
    // case 1: 野指针
#if 0
    int a;
    printf("a:%d\n",a);

    int array[10];
    for(int idx = 0; idx < sizeof(array)/sizeof(int); idx++)
    {
        printf("array[%d]:%d\n",idx,array[idx]);
    }
#endif

#if 0
    char *p ; // 野指针
    printf("\n");

#endif
    // case 2: 
    char *ptr = (char*)malloc(sizeof(char) * BUFF_SIZE);
if(!ptr)
{
    /* todo... */
    /* 状态码 */
    return -1;
}
    /* 使用malloc函数分配的内存，数据是脏的，必须要手动释放，否则内存泄漏  */
    memset(ptr,0,sizeof(char)*BUFF_SIZE);
#if 0
    /* 极度危险的函数 该用srtncpy*/
    strncpy(ptr,"hello world");
#else
    /* */
    strncpy(ptr,"hello world",BUFF_SIZE);
#endif
    printf("*ptr:%c\n",*ptr);

    if(ptr != NULL)
    {
        free(ptr);
        ptr = NULL;
    }

    if(ptr != NULL)
    {
        free(ptr);
        ptr = NULL;
    }

    return 0;
}