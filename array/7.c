#include<stdio.h>
#include<stdlib.h>

#define NUM 5

int main()
{
	char a[NUM]={0},tmp,k;
	int i,pos=0;
	printf("how many char do you want to fill in buffer range from 1 the %d MAX char \n",NUM-1);
	scanf("%d",&k);
	
	if (k<NUM)
	{
	printf("Ok!. enter the %d char \n",k);
	for(i=0;i<k;i++)
		scanf(" %c",&a[i]);

	printf("---- Buffer before ---\n");
	
	for(i=0;i<NUM;i++)
		printf(" %d  %c \n",i+1,a[i]);

	printf("enter the position No. to add char\n ");
	scanf(" %d",&pos);
	
	printf("enter data (char)\n ");
	scanf(" %c",&tmp);

	if(k<pos)
	{
		a[k]=tmp;
	}
	else{
	for(i=k;i>=pos-1;i--)
	{
		if(i!=pos-1)
		a[i]=a[i-1];
		else
		a[i]=tmp;
	}
	}
	printf("\n---- after ---\n");
	for(i=0;i<NUM;i++)
		printf(" %d  %c \n",i+1,a[i]);

	printf("\n");
}
else
{
	printf("Exit..OFR\n");
	
}
return 0;
}
