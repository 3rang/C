#include<stdio.h>

int main(int argc,char **argv)
{
	if(argc==2)
	{
		printf("Vowels in the string\n");
		for(int i=0;argv[1][i]!='\0';i++)
		if(argv[1][i] == 'a'|| argv[1][i] == 'e' || argv[1][i] == 'i' || argv[1][i] == 'o' || argv[1][i] == 'u' || argv[1][i] == 'A'|| argv[1][i] == 'E' || argv[1][i] == 'I' || argv[1][i] == 'O' || argv[1][i] == 'U')
		{
			printf("%c ",argv[1][i]);
		}
		printf("\n");
		
		return 0;
	}
	else
	{
		printf("Error!. input ex. ./a.out string\n");
		return -1;
	}
}
