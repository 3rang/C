#include<stdio.h>
#include<stdlib.h>


int main()
{
	int num;
	printf("enter the number \n");
	scanf("%d",&num);

	int i,j=0,k;

	i=num;
	while(i)
	{
		k=i%10;
		j=j*10+k;
		i/=10;
	}

	if(num==j)
	{
		printf("Palindrome \n");
	}
	else
	{
		printf(" not a Palindrome \n");
	}
	printf("\n");
}
