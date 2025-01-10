#include <stdio.h>

/**
* c语言的不同作用域居然可以定向相同标识符的变量，而且相互之间不影响
* @param   
* @return  
* @author  :loulan
* */
int main()
{
    // 自动变量如果不指定数据的话，那么默认是不会进行初始化的，它的数据会是之前分配给x的空间中的任意值。
    // 所以如果定义变量的话，在c语言里面最好设置好默认初始化的值。，
    int x = 30;

    printf("A ---- x = %d  at  %p\n", x, &x);
    {
        int x = 77;
        printf("B ---- x = %d  at  %p\n", x, &x);
    }
    printf("C ---- x = %d  at  %p\n", x, &x);
    while (x++ < 33)
    {
        int x = 100;
        x++;
        printf("D ---- x = %d  at  %p\n", x, &x);
    }
    printf("E ---- x = %d  at  %p\n", x, &x);
    return 0;
}