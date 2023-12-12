
int mystrlen(const char* str)
{
    // char* p = str;
    int count = 0;
    while (*str != '\0')
    {   
        count++;
        str++;
    }
    return count;
    
}

void mystrcpy(char * dest, const char * src)
{
    // int idx = 0;
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    
}
void mystrcat(char * dest, const char * src)
{
    // int idx = 0;
    while (*dest != '\0')
    {
        dest++;
    }
    // int idx2 = 0;
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}
int mystrcmp(const char* str1, const char* str2)
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
