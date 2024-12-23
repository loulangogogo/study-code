#include <stdio.h>

void put1(char *string)
{
    while (*string != '\0')
    {
        putchar(*string++);
    }
}

int put2(const char *string)
{
    int count = 0;
    while(*string){
        putchar(*string++);
        count++;
    }
    putchar('\n');

    return count;
}

int main()
{
    char *str = "Hello World!";

    put1(str);
    int a = put2(str);
    printf("a = %d\n", a);
    return 0;
}