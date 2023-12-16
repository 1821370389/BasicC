/* 清除字符串中多余的空格，并反转单词的顺序 */
#include <stdio.h>
#include <string.h>

#define MAX_LEN 100
#define MAX_ROWS 5
#define MAX_COLS 10

int main()
{
    char str[MAX_LEN] = " I   am     from  China   ";
    char newstr[MAX_ROWS][MAX_COLS] = {0};
    int rows = 0;
    int cols = 0;
    for(int idx = 0; idx < strlen(str); idx++)
    {
        printf("%d, %d\n", rows, cols);
        if(str[idx] != ' ')
        {
            printf("%c, ", str[idx]);
            newstr[rows][cols++] = str[idx];
            if(str[idx + 1] == ' ')
            {
                rows++;
                cols = 0;
            }
        }
    }
    // for(int idx = rows; idx >= 0; idx--)
    // {
    //     printf("%s ", newstr[idx]);
    // }
    strcpy(str, newstr[rows-1]);
    for(int idx = rows-2; idx >= 0; idx--)
    {
        strcat(str, " ");
        strcat(str, newstr[idx]);
    }
    printf("\n%s\n", str);
    // printf("\n");
}
