#include <stdio.h>

#define SLEN 20
#define LIM 5


int main()
{
    const char *mytalents[LIM] = {"splash", "smack", "snap", "smack", "splash"};
    char yourtalents[LIM][SLEN] = {"splash", "smack", "snap", "smack", "splash"};

    for (int8_t i = 0; i < LIM; i++)
    {
        printf("%-36s  %-25s\n", mytalents[i], yourtalents[i]);
    }

    printf("\nsizeof mytalents: %zd, sizeof yourtalents: %zd\n",sizeof(mytalents), sizeof(yourtalents));
    


    return 0;
}