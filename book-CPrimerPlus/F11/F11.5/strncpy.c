#include <stdio.h>
#include <string.h>
/* 字符串复制 */

int main()
{
    char str1[20] = "Hello";
    char str2[20] = "666666";

    printf("str1 = %p\n", str1);
    printf("str2 = %p\n", str2);
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    // 返回的数据是一个指针，指向复制出来的数据
    //如果复制是一个数组那么 最会一个参数 n 不能大于数组大小
    // 如果复制的是一个指针，最后一个参数 n 不能大于指针字符串的大小，否则回报错。
    char *ps = strncpy(str2+5, str1, 12);
    puts("");
    printf("str1 = %p\n", str1);
    printf("str2 = %p\n", str2);
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    printf("ps = %p\n", ps);
    printf("ps = %s\n", ps);
    return 0;
}