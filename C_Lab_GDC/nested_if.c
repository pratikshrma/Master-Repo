#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the Value of A ");
	scanf("%d",&a);
	printf("Enter the Value of B ");
	scanf("%d",&b);
	printf("Enter the Value of C ");
	scanf("%d",&c);
	
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
