#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num=100,i,j;

	for (i=1;i<=10;i++)
	{
		for (j=2; (j<i) && (i%j !=0) ;j++)
		{
				printf("%d ",i);
				j++;
		}
	}
}
