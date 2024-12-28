#include <stdio.h>
#include <string.h>

#define SIZE 81
#define LIM 20
#define HALT ""
void stsrt(char *strings[], int n);
void * s_gets(char *st, int n);

int main(void)
{
    // 定义一个二维数组
    char input[LIM][SIZE];
    // 定义一个指针数组
    char *ptstr[LIM];
    // 定义一个变量（循环使用）
    int ct = 0;

    int k;

    // 输入指定行数的数据，然后进行排序
    printf("Input up to %d lines, and I will sort them.\n", LIM);
    // 在一个空行按Enter键结束
    printf("To stop, press the Enter key at a line's start.\n");

    // 循环进行输入，且输入不大于20行，输入不能为空，
    while (ct < LIM && s_gets(input[ct], SIZE) != NULL && input[ct][0] != '\0')
    {
        ptstr[ct] = input[ct];
        ct++;
    }

    // 进行排序
    stsrt(ptstr, ct);
    puts("Here's the sorted list:\n");

    // 内容输出
    for(k=0; k<ct; k++)
    {
        puts(ptstr[k]);
    }

    return 0;
}

/* 
string 指针数组
numner 指针数组的大小
 */
void stsrt(char *string[],int num)
{
    // 定义一个临时指针
    char *temp;

    // 冒泡排序
    // top 从0开始，seek 从top+1开始，seek < num
    for(int top=0; top<num-1; top++)
    {
        for(int seek=top+1; seek<num; seek++)
        {
            if(strcmp(string[top], string[seek]) > 0)
            {
                temp = string[top];
                string[top] = string[seek];
                string[seek] = temp;
            }
        }
    }
}

void * s_gets(char *st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if(ret_val)
    {
        while(st[i] != '\n' && st[i] != '\0')
            i++;
        if(st[i] == '\n')
            st[i] = '\0';
        else
            while(getchar() != '\n')
                continue;
    }

    return ret_val;
}