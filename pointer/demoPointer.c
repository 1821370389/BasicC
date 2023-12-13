#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 20

/* 指针 */
int main()
{

#if 0
    /* 1.指针怎么定义
        基础数值类型
    */
   /* 建议(Tips)：定义变量(任意类型)记得初始化 */
    int a = 0;
    long b = 0;

    /* 指针的定义 */
    int *p = NULL;
#endif

#if 0
    /* 指针的使用：指针内存存放的是某变量的地址 */
    /* 一级&二级指针 */
    int a = 10;
    int *p = &a;

    printf("   a = %d\n", a);   //10
    printf("  &a = %p\n", &a);  //0x7ffc416a4044
    printf("  *p = %d\n", *p);  //10 = *(&a)
    printf("   p = %p\n", p);   //0x7ffc416a4044 = &a 
    printf("  &p = %p\n", &p);  //0x7ffc416a4048    

    /* 指针的指针 (二级指针) */
    int **pp = &p;
    printf("  pp = %p\n", pp);  //0x7ffc416a4048 = &p
    printf(" *pp = %p\n", *pp); //0x7ffc416a4044 = *(&p) = p = &a
    printf(" &pp = %p\n", &pp); //0x7ffc416a4050 
    printf("**pp = %d\n", **pp);//10 = *(*(&p)) = *p = *(&a) = a
#endif

#if 0
    /* 指针的特性 */
    /* 指针占用的内存大小是8个字节(64位操作系统)，4个字节(32位操作系统） */
    int a = 10;
    int len = sizeof(a);
    printf("len = %d\n", len); 

    char b = 'a';
    len = sizeof(b);
    printf("len = %d\n", len); 

    char *ptr = &b;
    len = sizeof(ptr);
    printf("len = %d\n", len); 
    printf("ptr = %p\n", ptr);
    printf("*ptr = %d\n", *ptr); 

    int *ptrInt = &a;
    len = sizeof(ptrInt);
    printf("len = %d\n", len); 
    printf("ptrInt = %p\n", ptrInt);
    printf("*ptrInt = %d\n", *ptrInt);
#endif

#if 0
    /* 指针特性2 ：指针和字符串 */
    /* 字符串是区别于字符数组的 */
    char *ptr = "hello world";
    int len = sizeof(ptr);
    printf("len = %d\n", len);
    printf("ptr = %p\n", ptr);
    printf("*ptr = %c\n", *ptr);

    /* Q1 怎么获取字符串长度 */
    #if 0
    printf("lenptr = %ld\n", strlen(ptr));
    #else
    int count = 0;
    while(ptr[count] != '\0')
    {
        count++;
    }
    printf("count = %d\n", count);
    #endif

    /* Q2 字符数组的赋值 */
    char name[BUFFER_SIZE] = {0};
    strcpy(name, "zhangsan");
    printf("name = %s\n", name);

    /* Q3 给字符串赋值 */
    char *p = NULL;
    printf("p = %p\n", p);
    #if 1
    p = "lisi";
    printf("p = %p\n", p);
    p = "wangwu";
    printf("p = %p\n", p);
    #else
    strcpy(p, "lisi");
    #endif
    printf("p = %s\n", p);
#endif

#if 1
    /* 堆空间 */
    /* 堆内存是动态分配的，堆内存是由操作系统管理的，堆内存是不可见的 */
    /* void * 是一个指针，这个指针被称为万能指针 */
    char * ptr = (char *)malloc(sizeof(char) * BUFFER_SIZE);
    strcpy(ptr, "hello world");
    printf("ptr = %s\n", ptr);

#endif

#if 1

#endif

#if 1

#endif

    return 0;
}