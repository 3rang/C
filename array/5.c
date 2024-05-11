#include<stdio.h>
#include<stdlib.h>

#define NUM 5

int main()
{
	int a[NUM]={0},i,j;

	printf("enter the 10 numbers \n");

	for(i=0;i<NUM;i++)
		scanf(" %d",&a[i]);

	printf("---- before ---\n");

	for(i=0;i<NUM;i++)
		printf(" %d ",a[i]);
	int tmp;
	for(i=0,j=NUM-1;i<j;i++,j--)
	{
		tmp = a[i];
		a[i]=a[j];
		a[j]=tmp;
	}
	
	printf("\n---- after ---\n");
	for(i=0;i<NUM;i++)
		printf(" %d ",a[i]);

	printf("\n");
}
