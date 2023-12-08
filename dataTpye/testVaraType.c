#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int len;        /* int 整形就是整数 */
#if 0
    /* 变量的命名：数字，字母，下划线，不能以数字开头，不能使用关键字，不能使用系统关键字 */
    int age = 6;      /* 数据类型对应的是内存的储存空间 */
    int len = sizeof(age);
    printf("len = %d, age = %d\n", len,age);        /* %d就是打印整数 */
    // printf("Hello World!\n");


    /* 浮点数 */
    float weight = 75.5;
    len = sizeof(weight);
    printf("len = %d, weight = %f\n", len,weight);      /* %f就是打印浮点数  */

    double weight = 75.5;
    len = sizeof(weight);
    printf("len = %d, weight = %f\n", len,weight);      /* %f就是打印浮点数  */


    char sex = 'm';
    len = sizeof(sex);
    printf("len = %d, sex = %c\n",len,sex);

    long bigValue = 0;
    len = sizeof(bigValue);
    printf("len = %d, bigValue = %ld\n",len,bigValue);

    short smallValue = 0;
    len = sizeof(smallValue);
    printf("len = %d, smallValue = %d\n",len,smallValue);

    char sex = -1;
    len = sizeof(sex);
    printf("len: %d,sex = %c sex = %d\n",len ,sex,sex); /* %c就是打印字符 */
    
    char default_value = 137;
    len = sizeof(default_value);
    printf("len:%d,default_value = %c default_value = %d\n",len,default_value,default_value);


    /* 无符号 和 有符号的区别*/
    unsigned char m_value = -1;
    len = sizeof(m_value);
    printf("len:%d,sex=%c sex = %d\n",len,m_value,m_value);
#endif
#if 0

    /* 表达式 & 运算符 */
    /* 运算符 + - * / */
    int val = 10;
    printf("val = %d\n",val);

    /* 括号的优先级最高 运算符的优先级用括号限制*/
    /* 后置++ */
    val++;
    printf("val = %d\n",val);
    val--;
    printf("val = %d\n",val);

    /* 前置++ */
    ++val;
    printf("val = %d\n",val);
    --val;
    printf("val = %d\n",val);

    val +=2; /* val = val + 2 */
    printf("val = %d\n",val);
    val -=2; /* val = val - 2 */
    printf("val = %d\n",val);
    val *=2; /* val = val * 2 */
    printf("val = %d\n",val);
    val /=2; /* val = val / 2 */

    printf("discuss = %d\n",val/3);
    printf("discuss = %d\n",val%3);     /* 取模 */

    /* 随机数 */
    srand((unsigned)time(NULL)); /* 设置随机数种子 */
    int rand_num = rand();
    printf("rand_num = %d\n",rand_num);

    /* 中奖率25% */
    int lotteryRate = rand_num%4;
    printf("lotteryRate = %d\n",lotteryRate);

    int a = 5 * 2;
    printf("a = %d\n",a);

    int b = 5 << 1;     /* 位运算 左移一位 等于 *2 但要稍微快一点点*/
    printf("b = %d\n",b);

    int a = 51;
    // 32 + 16 + 2 +1
    // 2^5 + 2^4 + 2^1 + 2^0
    printf("a = %d\n",a);
    a <<= 1;
    printf("a = %d\n",a); 

    int val = 51;
    int orVal = val | 7; /* | 运算符 */
    int andVal = val & 2; /* & 运算符 */

    printf("orVal = %d andVal = %d\n",orVal,andVal);

    
    int notVal = !val; /* ! 运算符 非 */
    printf("notVal = %d\n",notVal);
#endif
#if 0
    char * ptr = (char *)malloc(sizeof(char)*10);
    if (!ptr)
    {

    }

#endif

#if 0
    /* 且或非*/
    if(1)
    {
        printf("1\n");
    }
    if(0)
    {
        printf("2\n");
    }
    if(1 || 0) /* 有一个条件满足就能过*/
    {
        printf("3\n");
    }
    if(1 && 0)
    {
        printf("4\n");
    }
    if(1 && 1)  /* 有一个条件不满足都不能过*/
    {
        printf("5\n");
    }
#endif

    long a = 128;
    len = sizeof(a);
    printf("str = %ld len = %d\n",a,len);

    return 0;
}