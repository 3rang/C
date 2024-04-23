#include<stdio.h>
#include<stdlib.h>

#define MAX 65000



void setbit(int *number,int *bit)
{
	//logic

	*number = (*number | (1 << *bit));


}

void clearbit(int *number,int *bit)
{
	//logic

	*number = (*number & ~(1 << *bit));


}

void togglebit(int *number,int *bit)
{
	//logic

	*number = (*number ^ (1 << *bit));


}



int main()
{

	int numBer,biT,seLect;
	printf("Enter the integer number between(1 - %d)\n",MAX);
	scanf("%d",&numBer);

	printf("Enter the nth bit number (0 - 31 )\n");
	scanf("%d",&biT);


	if((numBer > 0) && (numBer < MAX+1) && (biT >= 0) && ( biT < 32))
	{

		printf("Enterd number =  %d , bit location = %d \n",numBer,biT);

		printf("-------------------------------------\n");
		printf("Menu: 1. set bit \n"); 
		printf("      2. clear bit \n"); 
		printf("      3. toggle bit \n"); 
		printf("-------------------------------------\n");

		scanf("%d",&seLect);

		if((seLect >=1) && (seLect < 4))
		{
			switch(seLect)
			{
				case 1:
					setbit(&numBer,&biT);
					break;
				case 2:
					clearbit(&numBer,&biT);
					break;
				case 3:
					togglebit(&numBer,&biT);
					break;
				default:
					printf("Not Valid Selection\n");
			}
		}
		else
		{
			printf(" Not Valid Menu option \n");
		}

	
	printf("Final O/p = %d \n",numBer);
	}
	else
	{
		printf("Entred value is out of range\n");
	}

}
