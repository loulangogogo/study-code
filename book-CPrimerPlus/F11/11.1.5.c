#include <stdio.h>

int main (){
    const char *word = "I love you";
    putchar(*word);


    char word2[] = "Iloveyou";
    printf("%s", word2);
    printf("\n");
    printf("Iloveyou");
    putchar('\n');
    word2[0] = 'F';
    printf("%s", word2);
    printf("\n");
    printf("Iloveyou");
    return 0;
}