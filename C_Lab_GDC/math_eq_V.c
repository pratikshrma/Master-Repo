//it only works with the real roots so if you put random numbers there is a 
//chance that it might return NAN(not a number)
#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c;
	printf("So in quad eq 'ax^2+bx+c' Enter the value of A B C ");
	scanf("%f %f  %f",&a,&b,&c);
	printf("\nso the value of a is %f",a);
	printf("\nso the value of b is %f",b);
	
	printf("\nso the value of c is %f\n",c);
	float x1=-b+sqrt((b*b)-4*a*c)/(2*a);
	float x2=-b-sqrt((b*b)-4*a*c)/(2*a);
	printf("So the two roots are \n1>%f\n2>%f",x1,x2);
	return 0;
}
