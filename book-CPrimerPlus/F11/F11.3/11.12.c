#include <stdio.h>

#define DEF "I am a #defined string"

int main ()
{
    char str1[] = "An array was initialized to me";
    const char * str2 = "So was a pointer to me";

    puts("I`m an argument to puts()");
    puts(DEF);
    puts(str1);
    puts(str2);
    puts(&str1[5]);
    puts(str2 + 4);

    return 0;
}