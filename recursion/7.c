#include<stdio.h>
int fix;
int prime_no(int range,int i,int st)
{
	if(fix>range)
	{
		while(range%i++!=0)
		{
			st++;
		}
		if((range-2)==st)
			printf(" %d ",range);
		return prime_no(++range,2,0);
	}
}
int main()
{
	int range,st=0;
	printf("Enter the range to print prime numbers \n");
	scanf("%d",&range);
	fix=range;
	printf("----Prime Number-----\n");
 	prime_no(2,2,st);
	printf("\n");
}
