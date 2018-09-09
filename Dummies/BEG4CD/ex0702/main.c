#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;

    printf("I am waiting for a character:  \n");
    c=getchar();
    printf("I waited for the %d character.\n",c);

    return(0);
}
