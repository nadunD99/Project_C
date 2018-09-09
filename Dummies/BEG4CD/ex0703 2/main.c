#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    printf("I am waiting for character : \n");
    c=getc(stdin);
    printf("I waited for %d character.",c);
    return 0;
}
