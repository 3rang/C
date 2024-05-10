#include<stdio.h>
#include<stdlib.h>

#define NUM 10

int main()
{
	int a[NUM]={0},i,sum_even,product_odd=1;

	printf("enter the 10 numbers \n");

	for(i=0;i<NUM;i++)
		scanf(" %d",&a[i]);

	for(i=0;i<NUM;i++)
	{
		if(i%2==0)
		{ //odd
			product_odd*=a[i];
		}
		else
		{
			sum_even+= a[i];
		}

	}
    printf("Sum of even numbers: %d\n", sum_even);
    printf("Product of odd numbers: %d\n", product_odd);
}
