#include<stdio.h>
int main()
{
	int x=1000;
	do
	{
		printf("%d \t",x);
		x-=10;
	}while(x>=10);
}
