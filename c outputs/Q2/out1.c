#include<stdio.h>
void main()
{
	int i=0, x=0;
	do{ 
		if(i%5==0)
			{
			x++;
			printf("    %d",x);
			}
		++i;
	}
while(i<20);
printf("\n x= %d",x);		  
}
