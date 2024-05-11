#include<stdio.h>
#include<stdlib.h>

#define NUM 13

int main()
{
	int a[NUM]={0},b[NUM]={0},k=0,l;
	int i,pos=0,p,j;
	
	l=NUM;
	for(i=0;i<NUM;i++)
		scanf(" %d",&a[i]);

	printf("---- Buffer before ---\n");
	
	for(i=0;i<NUM;i++)
		printf(" %d  %d \n",i+1,a[i]);

	for (i = 0; i < l; i++) 
	{
		for (j = i + 1; j < l;) 
		{
			if (a[i] == a[j]) 
			{
				b[i]=a[i];
				for (p = j; p < NUM; p++) 
				{
					a[p] = a[p + 1];
				}
				l--; // Reduce the array size
			} else {
				j++; //
			}
		}

	}


	printf("\n---- after ---\n");
	for(i=0;i<l;i++)
		printf(" a[%d]=%d\n",i+1,a[i]);
	for(i=0;i<NUM-l;i++)
		printf(" b[%d]=%d\n",i+1,b[i]);

	printf("\n");
	
return 0;
}
