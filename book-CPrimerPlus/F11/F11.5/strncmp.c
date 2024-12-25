#include <stdio.h>
#include <string.h>

#define SIZE 10

int main()
{
    char *str1 = "hello";
    char *str2 = "helloss";
    // char str1[SIZE] = "hello";
    // char str2[SIZE] = "hello";
    printf("str1--%p\n",str1);
    printf("str2--%p\n",str2);
    printf("01--%d\n",str1 == str2);

    // 0 表示正确，其他表示错误不匹配,这个函数有第三个参数，该参数表示需要比较多少个字符。
    printf("02--%d\n",strncmp(str1,str2,5));
    
    printf("03--%d\n",strncmp(str1,"hello",5));
    printf("04--%d\n",(str1 == "hello"));
    return 0;
}