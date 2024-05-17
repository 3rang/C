#include<stdio.h>

char *words[10]= {"zero","one","two","three","four","five","six","seven","eight","nine"};

int digitword(int num)
{
		if(num==0){
			return num;
		}
		else{
		digitword(num/10);		
		return (printf(" %s", words[(num)%10]));
		}	
}

int main()
{

	int num,i;
	printf("enter the number (positive)\n");
	scanf("%d",&num);
	printf("Display interger in words\n");
	digitword(num);
	printf("\n");
}
