#include <stdio.h>

#define STLEN 5

int main(){

    char words[STLEN];

    puts("Enter strings (empty line to quit): ");
    gets(words);
    printf("Your strings was:\n");
    printf("%s\n", words);
    puts(words);
    puts("Done.");

    return 0;
}