#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 5

int main()
{   
    /* 字符数组 */
    #if 0
    /* 数组的概念:
    
    
        1.一片来纳许的存储空间
        2.数组是存储相同的数据类型
            int a[BUFFER_SIZE];//整型数组
            char b[BUFFER_SIZE];//字符数组
            char *c[BUFFER_SIZE];//字符串数组
    */

    char name[BUFFER_SIZE];
    memset(name, 0, BUFFER_SIZE);
    strncpy(name, "zhangsan",sizeof(name)-1);
    printf("name:%s\n", name);
    printf("name[1]:%c\n", name[1]);
    name[1] = 'H';/* 字符数组可以修改 */
    printf("name:%s\n", name);

    /* 指针和数组是不分家的 */
    printf("*(name+2):%c\n",*(name + 2));
    *(name + 2) = 'A';/* 也可以修改 */
    printf("name:%s\n", name);

    /* conclusion:
        1.指针和数组是不分家的；
            name[X] = *(name + X); //X是常量
        */
    #endif

    /* 字符串 : 内存在全局(常量)区 */
    #if 0
    char *name = "zhangsan";

    /* 指针&数组不分家 */
    printf("name[1]:%c,*(name + 1):%c\n", name[1],*(name + 1));//name[1] = *(name + 1);
    
    *(name + 1) = 'H'; /* 字符串不可以修改 */
    printf("name:%s\n", name);
    /* conclusion:
        字符数组和字符串的区别
        1.内存:
            字符串在全局区,不可以被修改;
            字符数组在栈区,可以被修改;
    */
    
    #endif

    /* 字符串数组 */
    #if 1
    char *names[BUFFER_SIZE] = {0};
    memset(names, 0, sizeof(names));
    names[0] = "zhangsan";
    names[1] = "lisi";
    names[2] = "wangwu";
    names[3] = "zhaoliu";
    names[4] = "qianqi";

    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("names[%d]:%s\n", idx, names[idx]);
    }
    /* conclusion:
        1.它是一个数组
        2.存放的是字符串
    */
   printf("names[0][0]:%c\n", names[0][0]);

    #endif


    return 0;
}
