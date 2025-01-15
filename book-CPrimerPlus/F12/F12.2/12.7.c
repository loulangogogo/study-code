#include <stdio.h>

static unsigned long int next = 1;

unsigned int rand()
{
    next = next * 1103515245 + 12345;
    unsigned int result = (next / 65536) % 32768;

    return result;
}

void srand(unsigned int seed)
{
    next = seed;
}

int main()
{
    int count;
    unsigned seed;

    printf("Please enter your choice for seed : ");
    while (scanf("%u", &seed) == 1)
    {
        srand(seed);
        for (count = 0; count < 5; count++)
        {
            printf("%d\n", rand());
        }

        printf("Please enter next seed(q to quit):\n");
    }

    printf("Done.\n");

    return 0;
}