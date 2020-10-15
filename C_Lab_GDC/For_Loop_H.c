#include<stdio.h>
int main()
{
	int a;
	printf("Enter no of rows");
	scanf("%d",&a);
	for(int j=0;j<a-1;j++)
	{
	if(j==a/2)
		{
			for(int i=0;i<a;i++)
			{
				printf("*");
			}
		printf("\n");
		}
	for(int i=0;i<a;i++)
	{
		if(i==0)
		{
			printf("*");
		}
		else if(i==(a-1))
		{
			printf("*");
		}
		else
		{
			printf(" ");
		}
	}
	printf("\n");
	}
	
	return 0;
}
