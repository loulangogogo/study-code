#include <stdio.h>
#include <string.h>

#define SIZE 10

void cmp01()
{
    char *str1 = "hello";
    char *str2 = "helloss";
    // char str1[SIZE] = "hello";
    // char str2[SIZE] = "hello";
    printf("str1--%p\n",str1);
    printf("str2--%p\n",str2);
    printf("01--%d\n",str1 == str2);

    // 0 表示正确，其他表示错误不匹配
    printf("02--%d\n",strcmp(str1,str2));
    
    printf("03--%d\n",strcmp(str1,"hello"));
    printf("04--%d\n",(str1 == "hello"));
}


int main ()
{
    cmp01();
    return 0;
}