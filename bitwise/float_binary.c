#include<stdio.h>
#include<stdlib.h>

#define MAX 65000

int main()
{
	float numBer;
	printf("Enter the Number (1- %d)\n",MAX);
	scanf("%f",&numBer);


		int i,j=0;
		char *ptr;
	       	
		ptr = (char *) &numBer;
		
		for(i=3;i>=0;i--)
		{
			for(j=7;j>=0;j--)
			{
	           		(ptr[i] & (1 << j))?printf("1"):printf("0");
				if( (i == 3 && j == 7) || ( i == 3 && j == 0) )	
				 	printf(" ");
			}

		}
		printf("\n");

}
