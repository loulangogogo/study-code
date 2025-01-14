#include <stdio.h>

// 声明报告计数的函数
void report_count();
// 声明累积计算的函数
void accumulate(int k);

// 定义全局变量count，用于记录用户输入的次数
int count = 0;

int main()
{
    int value;
    register int i;

    printf("Enter a positive integer (o to quit): ");
    // 循环读取用户输入的正整数，直到用户输入非正整数
    while (scanf("%d", &value) == 1 && value > 0)
    {
        // 每次输入成功，计数器加一
        ++count;
        // 对于每次输入，遍历从0到当前计数器的值，进行累积计算
        for (i = value; i >=0 ;i--)
        {
            accumulate(i);
        }
        printf("Enter a positive integer (o to quit): ");
    }
    // 输入结束后，报告循环执行次数
    report_count();

    return 0;
}

// 报告循环执行次数的函数
void report_count()
{
    printf("Loop executed %d times\n", count);
}

// 声明全局变量count，供其他文件使用
extern int count;

// 定义静态全局变量total，用于记录所有输入的总和
static int total = 0;

// 累积计算函数，参数k是当前循环的迭代变量
void accumulate(int k)
{
    // 定义静态局部变量subtotal，用于记录每次输入后的累积和
    static int subtotal = 0;

    // 如果k小于0，则打印当前循环次数、累积和与总和，并重置累积和
    if (k <= 0)
    {
        printf("loop cycle: %d\n",count);
        printf("subtotal: %d ; total: %d\n",subtotal,total);
        subtotal = 0;
    }
    else
    {
        // 否则，将k加到累积和与总和上
        subtotal += k;
        total +=k;
    }
}