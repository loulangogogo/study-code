#include <stdio.h>
#include <string.h>

// 字符串处理函数库
#include <ctype.h>

#define LIMIT 81

void ToUpper(char *);
int Punctuation(char *);
int main(void)
{
    char line[LIMIT];
    char * find;

    puts("Enter a line of text:");
    fgets(line, LIMIT, stdin);
    find = strchr(line, '\n');
    if (find)
        *find = '\0';

    ToUpper(line);
    puts(line);
    printf("That line has %d characters.\n",Punctuation(line));
    return 0;
}

void ToUpper(char * str)
{
    while (*str)
    {
        // 字符转换大写
        *str = toupper(*str);
        str++;
    }
}

int Punctuation(char * str)
{
    int count = 0;
    while (*str)
    {
        if (ispunct(*str))
            count++;
        str++;
    }
    return count;
}