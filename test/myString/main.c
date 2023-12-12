#include "myString.h"
#include <stdio.h>

int main()
{
    char str1[20] = "asdqwe";
    char str2[10] = "qweasd";
    mystrcpy(str1, str2);
    printf("%s\n", str1);
    printf("%s\n", str2);
    mystrcat(str1, str2);
    printf("%s\n", str1);
    int ret = mystrcmp(str1, str2);
    printf("%d\n", ret);
}