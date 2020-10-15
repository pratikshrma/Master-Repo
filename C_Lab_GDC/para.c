
#include<stdio.h>
#include<math.h>
float f(int x)
{
return 2*sqrt(4*x);
}

int main()
{
	for(int i=0;i<50;i++)
	{
	printf("%f",f(i));
	printf("\n");
	}
}
