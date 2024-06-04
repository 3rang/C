#include<stdio.h>

int main(int argc,char **argv)
{
	char count=0;
	if(argc==3)
	{
		for(int i=0;argv[1][i]!='\0';i++)
		{
			if(*argv[2]==argv[1][i])
				count++;
		}
		printf("%d\n",count);
		return 0;
	}
	else
	{
		printf("please check cmdline input (ex. ./a.out string char )\n");
		return -1;
	}
}
