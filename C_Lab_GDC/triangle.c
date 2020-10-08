#include<stdio.h>
int main()
{
	int yo;
	printf("Enter a number:- ");
	scanf("%d",&yo);
	for(int i=0;i<yo;i++)
	{
		for(int sp=yo;sp>i;sp--)
		{
			printf(" ");
		}
		for(int j=0;j<((i*2)+1);j++)	
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
