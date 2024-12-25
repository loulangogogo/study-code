#include <stdio.h>
#include <string.h>

int main()
{
    char *str1 = "Hello";
    char str2[20] = "666666";

    printf("str1 = %p\n", str1);
    printf("str2 = %p\n", str2);
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    // 返回的数据是一个指针，指向复制出来的数据
    char *ps = strcpy(str2+5, str1);
    puts("");
    printf("str1 = %p\n", str1);
    printf("str2 = %p\n", str2);
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    printf("ps = %p\n", ps);
    printf("ps = %s\n", ps);
    return 0;
}

int main1()
{
    char str1[20] = "Hello";
    char *str2;

    printf("str1 = %p\n", str1);
    printf("str2 = %p\n", str2);
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    // 源地址不能是指针，否则会报错
    // 声明数组将分配存储数据的空间，而声明指针只分配存储一个地址的空间
    strcpy(str2, str1);
    puts("");
    printf("str1 = %p\n", str1);
    printf("str2 = %p\n", str2);
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    return 0;
}