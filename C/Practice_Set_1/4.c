#include <stdio.h>
int main()
{
	float p,t,r;
	printf("Enter the Principle Amount  ");
	scanf("%f",&p);
	printf("Enter the Time ");
	scanf("%f",&t);
	printf("Enter the Rate ");
	scanf("%f",&r);
	float SI=(p*r*t)/100;
	printf("So the simple intrest on the principle %f is %f",p,SI);
	return 0;
	}
