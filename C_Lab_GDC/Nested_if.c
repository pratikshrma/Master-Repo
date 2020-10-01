#include<stdio.h>
int main()
{
	int a=5;
	int b=6;
	int c=7;
	if(a>b)
	{
		if(a>c)
		{
			printf("A is the largest integer");
		}
		else
		{
			printf("C is the biggest Integer");
		}
	}
	else
	{
		if(b>c)
		{
			printf("B is the biggest Integer");
		}
		else
		{
			printf("C is the greatest Integer");
		}
	}
	return 0;
}
