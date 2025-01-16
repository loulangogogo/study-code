#include <stdio.h>
#include <stdlib.h> /* 为 malloc(), free() 提供函数 */

/**
 * 主函数执行入口
 * 
 * 本程序用于动态分配内存以存储用户输入的double类型数据，并展示这些数据
 * 使用动态内存分配是因为我们事先不知道用户想要输入多少个数字，这样可以灵活地处理任意数量的输入
 */
int main()
{
    double *ptd;
    int max;
    int number;
    int i = 0;

    // 提示用户输入double类型数据的最大数量
    puts("What is the maximum number of type double entries?");

    // 确保用户正确输入了一个整数
    if (scanf("%d", &max) != 1)
    {
        puts("Number not correctly entered --bye.");
        exit(EXIT_FAILURE);
    }

    // malloc 可以动态分配内存，这样就可以做到动态数组大小，变长数组。
    ptd = (double *)malloc(max * sizeof(double));
    if (ptd == NULL)
    {
        puts("Memory allocation failed. Goodbye.");
        exit(EXIT_FAILURE);
    }

    // 提示用户开始输入double类型的数据
    puts("Enter the values (q to quit):");
    // 循环读取用户输入的数据，直到达到最大数量或用户停止输入
    while (i < max && scanf("%lf", &ptd[i]) == 1)
    {
        i++;
    }

    // 显示用户输入的数字数量
    printf("Here are your %d entries:\n", number = i);

    // 遍历用户输入的数据并打印，每7个数据后换行
    for (i = 0; i < number; i++)
    {
        printf("%7.2f", ptd[i]);
        if (i % 7 == 6)
        {
            putchar('\n');
        }
    }

    // 如果最后不足7个数据，确保最后一行数据后也有换行
    if (i % 7 != 0)
    {
        putchar('\n');
    }

    // 程序结束前，释放之前分配的内存
    puts("Done.");
    free(ptd);

    return 0;
}