#include<stdio.h>
int main()
{
	int no,counter,P,N,Z;
	counter=1;
	P=0;
    N=0;   
	Z=0;
	
	while(counter<=10)
	{
		printf("Enter Number=   ");
		scanf("%d",&no);
		if(no>0)
		P=P+1;
		
	   	else if (no<0)
		N=N+1;
		else
		Z=Z+1;
		
		counter ++;		
	}
	printf("Possitive = %d \n",P);
	printf("Possitive = %d \n",N);
	printf("Possitive = %d \n",Z);
}
