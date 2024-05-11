#include<stdio.h>
#include<stdlib.h>

#define NUM 10

int main()
{
	int a[NUM]={0},b[NUM]={0},k,l;
	int i,pos=0,p,j;
	
	l=NUM;
	for(i=0;i<NUM;i++)
		scanf(" %d",&a[i]);

	printf("---- Buffer before ---\n");
	
	for(i=0;i<NUM;i++)
		printf(" %d  %d \n",i+1,a[i]);

	for (i = 0; i < l; i++) {
		k=1;
		b[i]=k;
		for (j = i + 1; j < l;) {
			if (a[i] == a[j]) {
					b[i]=++k;
					 for (p = j; p < NUM; p++) {
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
		if(b[i]==1)
		printf(" %d Number %d times \n",a[i],b[i]);

	printf("\n");
	
return 0;
}
