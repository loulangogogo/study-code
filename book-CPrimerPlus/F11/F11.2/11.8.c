#include <stdio.h>

#define STLEN 10
int main()
{
    char words[STLEN];

    puts("请输入内容：");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
    {
        fputs(words, stdout);
    }

    puts("Done.");
    

    return 0;
}