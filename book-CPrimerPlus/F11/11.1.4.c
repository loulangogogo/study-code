#include <stdio.h>

int main() {
    char heart[] = "I love Tillie!";
    const char *head = "I love Millie!";

    for (int8_t i = 0; i < 6; i++)
        putchar(heart[i]);
    putchar('\n');
    for (int8_t i = 0; i < 6; i++)
        putchar(head[i]);
    putchar('\n');

    return 0;
}
