#include <stdio.h>
int main()
{
	float a,b,c,e;
	printf("Enter the value of A B C E\n");
	scanf("%f %f %f %f",&a,&b,&c,&e);
	float x=2/a+(2*b+(4*c)/5*a)/(2/e);
	printf("So the value of X is %f",x);
	return 0;
}
