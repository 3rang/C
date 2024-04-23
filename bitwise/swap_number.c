#include<stdio.h>
#include<stdlib.h>

#define MAX 65000

int main()
{
	int numBer1;
	int numBer2;
	printf("Enter the First Number (1- %d)\n",MAX);
	scanf("%d",&numBer1);
	printf("Enter the Second Number (1- %d)\n",MAX);
	scanf("%d",&numBer2);


	if ((numBer1 <= 65000) && (numBer2 <=65000))
	{
		printf("Entered number Number1 = %d , number2 = %d\n",numBer1,numBer2); 
		numBer1=numBer1^numBer2;
		numBer2=numBer1^numBer2;
		numBer1=numBer1^numBer2;
		printf("Swaped number Number1 = %d , number2 = %d\n",numBer1,numBer2); 

	}
	else
	{
		printf("Out of Range..\n");
	}
}
