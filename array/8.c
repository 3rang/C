#include<stdio.h>
#include<stdlib.h>

#define NUM 5

int main()
{
	char a[NUM]={0},tmp,k,l;
	int i,pos=0,p,j;
	
	l=NUM;
	for(i=0;i<NUM;i++)
		scanf(" %c",&a[i]);

	printf("---- Buffer before ---\n");
	
	for(i=0;i<NUM;i++)
		printf(" %d  %c \n",i+1,a[i]);

	 for (i = 0; i < l; i++) {
        for (j = i + 1; j < l;) {
            if (a[i] == a[j]) {
                for (p = j; p < l; p++) {
                    a[p] = a[p + 1];
                }
                l--; // Reduce the array size
            } else {
                j++; // Only increment j if there's no duplicate
            }
        }

	 }
	printf("\n---- after ---\n");
	for(i=0;i<NUM;i++)
		printf(" %d  %c \n",i+1,a[i]);

	printf("\n");
	
return 0;
}
