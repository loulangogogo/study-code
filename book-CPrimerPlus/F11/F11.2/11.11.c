#include <stdio.h>

int main()
{
    char name[11],name2[11];
    int count;

    printf("Enter 2 names: ");
    count = scanf("%5s %10s", name, name2);
    printf("Count: %d\n", count);
    printf("Name: %s\n", name);
    printf("Name2: %s\n", name2);

    return 0;
}