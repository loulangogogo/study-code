#include <stdio.h>
#include <string.h>

#define STLEN 10

int main()
{
    char words[STLEN];
    char *pt="";
    int i = 0;

    puts("Enter strings (empty line to quit): ");
    while (fgets(words, STLEN, stdin) != NULL)
    {
        int i = 0;

        while (words[i] != '\n' && i < STLEN)
            i++;
            
        if (words[i] == '\n')
        {
            printf("\ni===%d\n",i);
            words[i] = '\0';
            strcat(pt, words);
            break;
        }else{
            strcat(pt, words);
        }
    }

    fputs(pt, stdout);
    return 0;
}