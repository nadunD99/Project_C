#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("I am waiting for character 'a','b','c': \n");
    int  a=getc(stdin),b=getc(stdin),c=getc(stdin);
    printf("I waited for character %c%c%c",a,b,c);
    return (0);
}
