#include<stdio.h>

int main(int argc,char **argv)
{
	int flag=1;
	if(argc==3)
	{
		for(int i=0;argv[1][i]!='\0' ||  argv[2][i]!='\0';i++)
		{
			if(argv[1][i]-argv[2][i]==0)
			{
				flag=0;
			}
			else
			{
				flag=1;
			}
		}

		!flag?printf("same string\n"):printf("not same string\n");
		printf("flag=%d\n",flag);
		return 0;
	}
	else
	{
		printf("Error: i/p ex. ./a.out string1 string2\n");
		return -1;
	}
}
