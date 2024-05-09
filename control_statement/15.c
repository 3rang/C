#include<stdio.h>
#include<stdlib.h>

#define num 50

int main()
{
	int buf[50]={0},i,k=0;
	for(i=0;i<num;i++)
	{
		k++;
	     if(i==0)
	     {
		buf[i]=i;
		buf[i+1]=i+1;
		i++;
	     }
	     else
	     {
		     buf[i]=buf[i-1]+buf[i-2];
	      if(buf[i]>num)
		    break;
	     }
	     
	}
	for(i=0;i<k;i++)
	{
		printf(" %d ",buf[i]);
	}
	printf("\n");
	return 0;
}
