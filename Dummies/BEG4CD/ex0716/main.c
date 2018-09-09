#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Who[15];

    printf("Who are you ? \n");
    fgets(Who,15,stdin);
    printf("Glade to meet you %s .\n",Who);

    return (0);
}
