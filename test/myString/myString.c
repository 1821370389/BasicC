
int mystrlen(char* str)
{
    char* p = str;
    int count = 0;
    while (*p != '\0')
    {   
        count++;
        p++;
    }
    return count;
    
}

void mystrcpy(char dest[], char src[])
{
    int idx = 0;
    while (src[idx] != '\0')
    {
        dest[idx] = src[idx];
        idx++;
    }
    dest[idx] = '\0';
    
}
void mystrcat(char dest[], char src[])
{
    int idx = 0;
    while (dest[idx] != '\0')
    {
        idx++;
    }
    int idx2 = 0;
    while (src[idx2] != '\0')
    {
        dest[idx+idx2] = src[idx2];
        idx2++;
    }
}
int mystrcmp(char* str1, char* str2)
{
    while(*str1 == *str2)
    {
        if(*str1 == '\0')
        {
            return 0;
        }
        str1++;
        str2++;
    }
    return *str1 - *str2;

}
