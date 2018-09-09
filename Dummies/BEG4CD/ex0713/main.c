#include <stdio.h>
#include <stdlib.h>

int main()
{
    char FirstName[15],LastName[15];

    printf("Enter your First Name: ");
    scanf("%s",FirstName);
    printf("Enter Your Last Name: ");
    scanf("%s",LastName);
    printf("Pleased to meet you, %s %s. \n",FirstName,LastName);

    return (0);
}
