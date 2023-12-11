#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 32

/* 作业：手写字符串四个常用函数 */
int main()
{
#if 0
    /* 数组初始化 */
    int array[BUFFER_SIZE] = {0};
    memset(array, 0, sizeof(array));
#endif

#if 0
    /* 字符数组 */
    char array[BUFFER_SIZE] = "hello world";
    int len = sizeof(array)
    printf("len = %d,array:%s\n", len,array);
#endif

#if 0

    /* 字符串 (字符数组)*/
    char array[BUFFER_SIZE] = "hello world";
    /* 常用的字符串函数 */
    /* 第一个 strlen */
    int len = strlen(array);
    printf("len: %d,array:%s\n", len,array);

    /* 第二个 strcpy */
    char name[BUFFER_SIZE];
    memset(name, 0, sizeof(name));
    strcpy(name, "zhangsan");
    printf("array2:%s\n", name);

    /* 第三个 strcat */
    strcat(name, " lisi");
    printf("array3:%s\n", name);

    /* 第四个 strcmp */
    char name2[BUFFER_SIZE] = "wangwu";
    int ret = strcmp(name, name2);
    printf("ret:%d\n", ret);

#endif

#if 1
    /* 字符串(常量) */
    /* 指针入门 */
    char *ptr = "hello world";
    int len = strlen(ptr);
    int size = sizeof(ptr);

    printf("len:%d,size:%d\n", len, size);

    printf("*ptr:%c\t*(ptr+1):%c\n", *ptr, *(ptr+1));

    // *ptr = 'H';
    // printf("*ptr:%c\t*(ptr+1):%c\n", *ptr, *(ptr+1));

#endif

#if 1
#endif

    return 0;
}