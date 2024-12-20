#include <stdio.h>

#define STLEN 10

int main()
{
    char words[STLEN];

    printf("请输入字符串：\n");
    fgets(words, STLEN, stdin);
    printf("你的输入是：%s\n", words);
    fputs(words,stdout);
    fputs("Done",stdout);

    return 0;
}