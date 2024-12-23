#include <stdio.h>

#define STLEN 10

int main()
{
    char words[STLEN];

    printf("请输入字符串：");
    gets_s(words, STLEN);
    printf("您输入的字符串是：%s\n", words);

    return 0;
}