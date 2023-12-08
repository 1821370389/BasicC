#include <stdio.h> 

#define BUFFER_SIZE 10

int main()
{
#if 0
    /* 如何获取数组有多少个元素 ： 数组总长度/ 每个元素的长度 */
    char array[BUFFER_SIZE] = {0};

    int arrayLen = sizeof(array);
    printf("arrayLen = %d\n", arrayLen);
    int elementLen = sizeof(array[0]);
    printf("elementLen = %d\n", elementLen);

    int length = arrayLen / elementLen;
    printf("length = %d\n", length);

    /* 字符数组 */
    /* Q1： 什么叫字符 */
    char pNum = 'a';
    printf("pNum = %c\n", pNum);

    /* 只要是指针的变量，定义变量第一个需要是p开头 */
    char * ptr = "hello world";
    printf("ptr = %s\n", ptr);
#endif

    /* 字符数组初始化定义的两种方式 */
    char buffer1[] = "hello world";
    /* 如果是以双引号的方式，会默认加上'\0' */
    char buffer2[] = {'h', 'e', 'l', 'l', 'o', ' ', 'w' , 'o' , 'r' , 'l' , 'd' };
    /* 如果是以单引号的方式，默认不会加上'\0' */
    int buflen1 = sizeof(buffer1);
    int buflen2 = sizeof(buffer2);

    printf("buffer1:%p,\tbufffer2:%p\n", buffer1,buffer2);

    printf("bufle1 = %d,buffer1:%s\n", buflen1,buffer1);
    printf("bufle2 = %d,buffer2:%s\n", buflen2,buffer2);

    return 0;
}