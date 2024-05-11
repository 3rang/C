#include<stdio.h>
#include<stdlib.h>

#define NUM 8

int main()
{
	int a[NUM]={0},i,j,pos=0;

	printf("enter the %d numbers \n",NUM);

	for(i=0;i<NUM;i++)
		scanf(" %d",&a[i]);

	printf("---- before ---\n");
	
	for(i=0;i<NUM;i++)
		printf(" %d  %d \n",i+1,a[i]);

	printf("enter the position to delete number range ( 1 to %d )\n ", NUM);
	scanf("%d",&pos);
	if(pos<=NUM){

	for(i=pos-1;j<NUM;i++)
	{
		a[i]=a[i+1];
	}

	printf("\n---- after ---\n");
	for(i=0;i<NUM;i++)
		printf(" %d  %d \n",i+1,a[i]);
	printf("\n");
}
else{
	printf("OFR\n");
}

}
