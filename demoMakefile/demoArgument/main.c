#include <stdio.h>
#include <unistd.h>

int main()
{
    int idx = 0;
    while (idx < 10)
    {
        printf("Hello World\n");
        printf("idx = %d\n", idx);
        idx++;
        sleep(1);
    }
}