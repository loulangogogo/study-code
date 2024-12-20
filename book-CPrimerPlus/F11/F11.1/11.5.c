#include <stdio.h>

int main ()
{
    const char * mesg = "Don't be too proud of this technological";
    const char * copy;

    copy = mesg;
    printf("copy = %s\n", copy);
    printf("mesg = %s; &mesg = %p; value = %p\n", mesg,&mesg,mesg);
    printf("copy = %s; &copy = %p; value = %p\n", copy,&copy,copy);

    return 0;
}