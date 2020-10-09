#include<stdio.h>
int main()
{
	for(int a=1;a<=5;a++)
	{
		for(int sp=5;sp>=a;sp--)
		{
			printf(" ");
		}
		for(int b=1;b<=a;b++)
		{
			printf("%d",a);
		}
		printf("\n");
	}
	return 0;
}
