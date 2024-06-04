#include<stdio.h>

void reversal(char *p)
{
//		printf("enter string = %s\n",p);
		if(*p)
		{
		reversal(p+1);
		printf("%c",*p);
		}
}

int main(int argc,char **argv)
{
	if(argc==2)
	{
		printf("enter string = %s\n",argv[1]);
		reversal(argv[1]);
		
	}
	else
	{
		printf("error: ex. a./out string\n");
		return -1;
	}
}

