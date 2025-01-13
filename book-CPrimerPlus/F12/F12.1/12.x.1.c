#include <stdio.h>
#include <stdlib.h>

int main () {
    // register 表明是寄存器变量,寄存器变量无法读取地址
    register char *i = "1234";

    printf("%p\n", &i);
    return 0;
}