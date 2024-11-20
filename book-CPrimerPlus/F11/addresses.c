#include <stdio.h>

#define MSG "I'm special"

int main(void)
{
	char ar[] = MSG;
    const char *pt = MSG;
    printf("address of \"i'm special\" %p \n", "I'm special");
    printf("address of ar is %p \n", ar);
    printf("address of pt is %p \n", pt);
    printf("address of \"MSG\" is %p \n", MSG);
    printf("address of \"i'm special\" %p \n", "I'm special");

    return 0;
}