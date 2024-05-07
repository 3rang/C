#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define MAX 10500
int main()
{
	int i,j,k=0,l,w;

	for(i=1;i<=MAX;i++)
	{
		k=0;
		j=i;
		while(j)
		{	
			k++;
			j/=10;
		}
		j=0;
		l=i;
		do
		{
			w=l%10;
			j+=pow(w,k);
			l/=10;
		}
		while(l);
		if(i==j)
			printf(" %d ",i);
	}
	printf("\n");
	return 0;
}
