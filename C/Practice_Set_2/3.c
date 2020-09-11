#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year you wanna find if its a leap year not ");
	scanf("%d",&year);
	if(year%4==0)
	{printf("It is a leap year");}
	else if(year%100==0)
	{printf("It is a leap year");}
	else if(year%400==0)
	{printf("It is a leap year");}
	else
	{printf("It is not a leap year");}
	return 0;
}
