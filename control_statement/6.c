#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num=100,i,j,k=0;

	for (i=1;i<=100;i++)
	{
		if(i!=1 && i<=2)
		{
			printf(" %d \b",i);
		}
		else
		{  k=0;
			for(j=1; j<i ;j++)
			{
				if(i%j!=0)
				 k++;
			}
				if(k==(j-2))
				printf(" %d \b",i);
		}
	}
	return 0;
}
