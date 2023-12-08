#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 状态码 */
enum STAUS_CODE
{
    REGISTER = 1,
    LOGIN = 2,
    LOGOUT = 3,
};

/* 宏定义 */
/* 宏必须大写 */
#define COUNT_NUM 10
#define RAND_NUM 100


int main()
{


#if 0

    /* 判断语句 */
    int budget = 5000,minbudget = 3000,maxbudget = 8000;
    

    int applephone = 8999 , mil4Pro = 4399 , huaweiP60 = 6000;

    
    if(budget >= applephone)
    {
        printf("Can buy applephone!\n");
    }
    else if (budget >= mil4Pro)
    {
        printf("Can buy mil4Pro!\n");
    }
    else if (budget >= huaweiP60)
    {
        printf("Can buy huaweiP60!\n");
    }
    else
    {
        printf("Can not buy any phone!\n");
    }

    if(budget >= applephone || budget >= mil4Pro || budget >= huaweiP60)
    {
        printf("I an happy,can buy a phone\n");
    }
    else
    {
        printf("I am sad,can not buy any phone\n");
    }

    /* &&:两边都是1才是1 */
    if((budget >= minbudget) && (budget <= maxbudget))
    {
        printf("I am happy,can buy a phone\n");
    }
    else
    {
        printf("I am sad,can not buy any phone\n");
    }


#endif

/* 代码规范1：一个函数尽量不要超过80行,最多不要超过120行. */
#if 0

    /* switch */
    int choice = 0;
    printf("请输入您的选择:\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case REGISTER:
    {
        /* 如果case里面语句过多，一定要加上{}来包含  */
        printf("Welcome to register\n");
        break;
    }
    case LOGIN:
        printf("Welcome to login\n");
        break;
    case LOGOUT:
        printf("Welcome to logout\n");
        break;
    default:
        printf("input choice invalid\n");
        break;
    }

#endif

#if 0

    /* 设置随机数种子 */
    srand(time(NULL));

    /* 请写一个100内的数 [ 1 - 100] */


    /* 循环 */
    /* 代码规范 禁止用i,用idx；禁止使用作用不明的数，用宏定义 */
    int rabdomNum = 0;
    for(int idx = 0;idx < COUNT_NUM;idx++)
    {
        rabdomNum = rand() %RAND_NUM + 1;
        printf("rabdomNum = %d\n",rabdomNum);
    }

#endif

#if 0
    srand(time(NULL));

    /* 代码规范 变量尽量使用驼峰命名*/
    int circleTime = COUNT_NUM >>1;
    int rabdomNum = 0;

    /* 一定要有推出条件 */
    while(circleTime--)
    {
        rabdomNum = rand() %RAND_NUM + 1;
        printf("rabdomNum = %d\n",rabdomNum);
    }
#endif

#if 0

    /* 用处： 常使用在宏函数 */
    srand(time(NULL));
    int circleTime = COUNT_NUM >>1;
    int rabdomNum = 0;

    do
    {
        rabdomNum = rand() %RAND_NUM + 1;
        printf("rabdomNum = %d\n",rabdomNum);
    } while (circleTime--);
    

#endif

    return 0;

}