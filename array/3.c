#include<stdio.h>
#include<stdlib.h>

#define NUM 10

int main()
{
	int a[NUM]={0},i,b[NUM]={0},k,tmp,j,l=0;

	printf("enter the 10 numbers \n");

	for(i=0;i<NUM;i++)
		scanf(" %d",&a[i]);

	for(i=0;i<NUM;i++)
	{
		k=0;
		tmp=a[i];
		if(tmp == 1 || tmp == 2)
		{
			b[i]=tmp;
		}
		for(j=1;j<tmp;j++)
		{
			if((tmp%j)!=0)
				k++;
		}
		if(k==(j-2))
		{
			b[l++]=tmp;
		}
	}
    
	for(i=0;i<l;i++)
	{
		printf("Prime Numbers: %d\n", b[i]);
	}
    
}
