#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of A");
	scanf("%d",&a);
	printf("Enter the value of B");
	scanf("%d",&b);
	if(a<b)
	{
		printf("A is smaller than B");
	}
	else
	{
		printf("B is smaller than A");
	}
	return 0;
}
