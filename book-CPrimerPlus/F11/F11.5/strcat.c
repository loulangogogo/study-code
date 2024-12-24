#include <stdio.h>
#include <string.h>

#define SIZE 80

int main ()
{
    char flower[SIZE] = "Rose";
    char addon[] = "-s";

    puts(flower);
    puts(addon);

    strcat(flower, addon);
    puts(flower);
    puts(addon);
    return 0;
}