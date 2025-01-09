#include <stdio.h>
#include <stdlib.h>


// atoi --- int


int main()
{
    int argc = 3;
    char *argv[] = {"3","0","1"};

    int i, times;
    if (argc < 2 || (times = atoi(argv[1])) < 1)
    {
        printf("Usage: %s positive-integer\n", argv[0]);
    }
    else
    {
        for (i = 0; i < times; i++)
        {
            printf("Hello, world!\n");
        }
    }

    return 0;
}