#include <stdio.h>
#include <stdlib.h>

int main()
{
     char FirstName[15],LastName[15];

    printf("Enter your First Name and Last Name: ");

    scanf("%s %s",FirstName,LastName);
    printf("Pleased to meet you, %s %s. \n",FirstName,LastName);

    return (0);
}
