#include<stdio.h>
int main()
{
	int no,Total,counter;
	float avg;
	
	counter=1;
	Total=0;
	
	while(counter<=10)
	{
		printf("Enter Number=    ");
		scanf("%d",&no);
		Total=Total+no;
		counter++;
	}
	printf("The Total =%d \n",Total);
		avg=(float)Total/10;
	printf("The Averagei is %.2f \n",avg);
}

