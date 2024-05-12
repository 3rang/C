#include<stdio.h>

#define SIZE 10

int push();
int pop();

int stack[SIZE]={0};

static int top=0;

int push()
{
if(top<SIZE)
{
  int tmp_push;
  printf("We are in %s\n",__func__);
  printf("Enter the data\n");
  scanf("%d",&tmp_push);
  stack[top]=tmp_push;
  top++;
  //int k=0;
 // for(k=0;k<top;k++)
 // printf(" data =%d",stack[k]);
}
else
{
	printf("Stack full\n");
	return 0;
}
}

int pop()
{
 if(top!=0){
  int tmp_pop;
  printf("We are in %s\n",__func__);
  tmp_pop=stack[--top];
  stack[top]=0;
  printf(" pop data %d \n",tmp_pop);
 // int k=0;
 // for(k=0;k<top;k++)
//  printf(" data =%d",stack[k]);
 }
 else
 {
	 printf("Empty stack\n");
	return 0;
 }

}


int main()
{
	int ip;
	char k;
	do {
	
	printf("++++Menu++++\n");
	printf("1.Push data\n");
	printf("2.Pop data\n");
	scanf("%d",&ip);

	switch(ip)
	{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		default: 
			printf("Invalid i/p\n");
			break;
	}
	printf("do you want to continue y/n?\n");
	scanf(" %c",&k);	
	}while(k == 'Y' || k == 'y');

}
