#include<stdio.h>
#include<stdlib.h>

#define NUM 10

int main()
{
	int a[NUM]={0},i,big2=0,small2=0;

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

		big2=a[0];	
		small2=a[0];
	for(i=0;i<NUM;i++)
	{
		if((a[i]>big2) && (a[i]!=big))
		{
			big2=a[i];
		}
		else if((a[i]<small2) && (a[i]!=small))
		{
			small2=a[i];
		}
	}
    printf(" Big number: %d\n", big);
    printf(" small number: %d\n", small);
    printf("2nd Big number: %d\n", big2);
    printf("2nd small number: %d\n", small2);
}
