//ax2+bx+c

#include <stdio.h>
int main()
{
	int a,b,c,x;
	printf("Enter the value of A B C X :- ");
	scanf("%d %d %d %d",&a,&b,&c,&x);
	float expr=(a*x*x)+(b*x)+c;
	printf("SO the value is %f",expr);
	return 0;
}
