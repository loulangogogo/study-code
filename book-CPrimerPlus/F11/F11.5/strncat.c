#include <stdio.h>
#include <string.h>

#define SIZE 30

int main ()
{
    char str1[SIZE] = "Hello";
    char str2[] = "World";

    strncat(str1, str2, 5);

    printf("str1: %s\n", str1);

    return 0;
}

