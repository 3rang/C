#include<stdio.h>
#include<stdlib.h>

#define MAX 65000



void printbinary(int *number)
{
	//logic

	int i=0;
	for (i=31;i>=0;i--)
	{
			((*number & (1<<(i)))!=0)?printf("1"):printf("0");
		if(i%8==0)
			printf(" ");

	}
	printf("\n");

}

void reveseprintbinary(int *number)
{
	//logic
	
	int bits32[32]= {0},i;
	for (i=31;i>=0;i--)
	{
			((*number & (1<<(i)))!=0)?(bits32[i]=1):(bits32[i]=0);
	}

	for (i=0;i<32;i++)
	{
			printf("%d",bits32[i]);
			if((i+1)%8==0){
				printf(" ");}
	}

	printf("\n");
}

void rotate_printbinary(int *number)
{
	int rt;
	char direction;
	printf("Enter the n rotate value\n");
	scanf("%d",&rt);

	printf("Enter the side L/R  rotatation \n");
	scanf(" %c",&direction);

	printf("-----before rotation-----\n");
	printbinary(number);


	int bits32[32]= {0},i;
	for (i=31;i>=0;i--)
	{
			((*number & (1<<(i)))!=0)?(bits32[i]=1):(bits32[i]=0);
	}


	int tmp[32],localrt=rt-1;
	for(i=31;i>=0;i--,localrt--)
	{
		if((direction == 'r') || (direction == 'R')){

			tmp[i]=bits32[localrt];
			if(localrt == 0)
			{
				localrt=32;
			}
		}
	}

	localrt=32-rt-1;
	for(i=31;i>=0;i--)
	{
		if((direction == 'l') || (direction == 'L')){

			tmp[i]=bits32[localrt--];
			if(localrt == 0)
			{
				localrt=32;
			}
		}
	}

/*	for(i=0;i<32;i++)
	{
		if((direction == 'l') || (direction == 'L'))
		{
			tmp[31-i]=bits32[31-localrt-i];
			if(((32-i) <= localrt) && localrt)
			{
				tmp[31-i]=bits32[32-];
					localrt--;
			}

		}
	}

*/

	printf("-----after rotation-----\n");

	for (i=31;i>=0;i--)
	{
			tmp[i]?printf("1"):printf("0");
			if(i%8==0)
			printf(" ");
	}

	printf("\n");
}

/*
void togglebit(int *number,int *bit)
{
	//logic

	*number = (*number ^ (1 << *bit));


}
*/


int main()
{

	int numBer,seLect;
	printf("Enter the integer number between(1 - %d)\n",MAX);
	scanf("%d",&numBer);

	if(1)
	{

		printf("Enterd number =  %d \n",numBer);

		printf("-------------------------------------\n");
		printf("Menu: 1. print binary \n"); 
		printf("      2. revese binart  \n"); 
		printf("      3. tXXX \n"); 
		printf("-------------------------------------\n");

		scanf("%d",&seLect);

		if((seLect >=1) && (seLect < 4))
		{
			switch(seLect)
			{
				case 1:
					printbinary(&numBer);
					break;
				case 2:
					reveseprintbinary(&numBer);
					break;
				case 3:
					rotate_printbinary(&numBer);
					break;
				default:
					printf("Not Valid Selection\n");
			}
		}
		else
		{
			printf(" Not Valid Menu option \n");
		}

	
	}
	else
	{
		printf("Entred value is out of range\n");
	}

}
