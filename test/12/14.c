/* 判断不止字符的字符串中的字符组成的字符串是否是回文字符串 */
#include<stdio.h>
#include<string.h>

#define MAX_CHAR_LEN 50


/* 删除特定元素 */
int deleteValue(char *array, int size, char deleteValue)
{
    /* 计数 */
    /* 要删除数字的个数 */
    int count = 0;
    /* 遍历计数*/
    int idx = 0;

    while(idx + count < size)
    {
        array[idx] = array[idx + count];
        if(array[idx] == deleteValue)
        {
            count++;
        }
        else
        {
            idx++;
        }
    }
    /* 返回删完后数组的大小 */
    return size - count;
}

/* 清除字符串中非字母的部分*/
void clearNotString(char *array, int *size)
{
    int idx = 0;
    int count = 0;
    while(idx < *size)
    {
        // printf("size = %d\n",*size);
        // printf("array = %s\n",array);
        if(array[idx] >= 'A' && array[idx] <= 'Z')
        {
            idx++;
        }
        else if(array[idx] >= 'a' && array[idx] <= 'z')
        {
            array[idx] = array[idx] - 32;
        }
        else
        {
            *size = deleteValue(array, *size, array[idx]);   
        }
    }
}

/* 判断字符串是否是回文*/
int isPalindromic(char *array, int size)
{
    char *ptr = array;
    char *pop = array + size - 1;
    while(ptr < pop)
    {
        if(*ptr++ != *pop--)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{

    char palindromicString[MAX_CHAR_LEN] = {0};

    printf("请输入字符串:\n");
    scanf("%[^\n]",palindromicString);
    printf("输入的字符串为:%s\n",palindromicString);

    int char1len = strlen(palindromicString);
    int *char1len1 = &char1len;
    printf("字符串长度为:%d\n",*char1len1);

    clearNotString(palindromicString, char1len1);
    printf("字符串长度为:%d\n",*char1len1);
    printf("清除非字母后的字符串为:%s\n",palindromicString);
    if(isPalindromic(palindromicString, *char1len1))
    {
        printf("是回文\n");
    }
    else
    {
        printf("不是回文\n");
    }


    return 0;
}