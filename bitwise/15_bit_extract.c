#include<stdio.h>
#include<stdlib.h>



int main() {
	int M;  
	int N;
	int P;

	printf("enter the number\n");
	scanf("%d",&M);

	printf("enter the position nth bit no\n");
	scanf("%d",&N);

	printf("enter the no. bits\n");
	scanf("%d",&P);

	int i;
	for(i=31;i>=0;i--)
		M & (1<<i)?printf("1"):printf("0");
	printf("\n");


	int tmp,j=0;

	tmp = M;

	tmp>>=(N-1); 

	for(i=P-1;i>=0;i--){
		tmp & (1<<i)?printf("1"):printf("0");
		j|= tmp&(1<<i);
	}
	printf("\n");
	printf("tmp=%d\n",j);

}  
