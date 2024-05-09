#include<stdio.h>
#include<stdlib.h>


int main()
{
	int num=50,i,j=0,l=2;
	for(i=0;i<=num;i++)
	{
		static int val=0;
		for(j=i;j<=i;j++)
		{
			l=1;
			printf(" %d ",val++);
			l--;
		}
	}
	printf("\n");
	return 0;
}
