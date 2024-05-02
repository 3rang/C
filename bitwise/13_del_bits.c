#include<stdio.h>
#include<stdlib.h>

int main()
{

	int number,pos,del;

	printf("enter the number (max. 65000)\n");
	scanf("%d",&number);
	printf("enter the position  (range 0-32)\n");
	scanf("%d",&pos);

	if(pos >=32)
	{	
		printf("Out of range\n");
		return -1;
	}

	printf("enter the delete bits counts from postition (max. %d)\n",pos);
	scanf("%d",&del);

	if( (number < 65000) && (del <= pos))
	{
		int i=0;
		for(i=31;i>=0;i--)
			number & (1 << i) ? printf("1"):printf("0");
		printf("\n");

		printf("After \n");


		for(i=31+del;i>=0;i--){
			if(number & (1 << i))
			{
				if(pos == i)
				{
					i--;
					del--;
				}
				else
					printf("1");
			}
			else 
			{
				if(pos == i)
				{
					i--;
					del--;
				}
				else
					printf("0");
			}
		}
		printf("\n");	
	}
	else
	{
		printf("Issue in the i/p out of range\n");
	}


}
