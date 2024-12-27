#include <stdio.h>
#include <string.h>

int main ()
{
    char first[20] = "你是啊！";
    char second[20] = "你狗日的。";
    char target[40];

    // 这个和printf是很类似的，printf是打印在屏幕上，sprintf是打印到字符串中
    sprintf(target, "%-19s%s", first, second);
    puts(target);
    return 0;
}