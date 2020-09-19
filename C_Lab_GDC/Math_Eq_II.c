#include <stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the value of A:- ");
	scanf("%d",&a);
	printf("Enter the value of B:- ");
	scanf("%d",&b);
	printf("Enter the value of C:- ");
	scanf("%d",&c);
	printf("Enter the value of D:- ");
	scanf("%d",&d);
	float expr=a-((b/c)*d);
	printf("SO the value is %f",expr);
	return 0;
}
