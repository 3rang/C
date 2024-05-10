#include<stdio.h>
#include<stdlib.h>

#define NUM 10

int main()
{
	int a[NUM]={0},i;

	printf("enter the 10 numbers \n");

	for(i=0;i<NUM;i++)
		scanf(" %d",&a[i]);

		int big=a[0];
		int small=a[0];
	for(i=0;i<NUM;i++)
	{
		if(a[i]>big)
		{
			big=a[i];
		}
		else if(a[i]<small)
		{
			small=a[i];
		}
	}
    printf("Big number: %d\n", big);
    printf("small number: %d\n", small);
}
