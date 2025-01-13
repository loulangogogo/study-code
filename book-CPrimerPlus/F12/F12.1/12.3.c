#include <stdio.h>


void test()
{
    static int a = 0;
    printf("数据当前是： %d\n",a++);
}


int main()
{
    for (size_t i = 0; i < 13; i++)
    {
        test();
    }
    
    return 0;
}