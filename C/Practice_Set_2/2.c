#include<stdio.h>
int main()
{	
	float income;
	printf("Enter your income in lakhs\n");
	scanf("%f",&income);
	if(income<2.5)
	{
		printf("You are free to go bro enjoy");
	}
	else if(income<=5)
	{
		printf("You gotta pay around 5%% boi");
		}
	else if(income<=10)
	{
		printf("You gotta pay around 20%% boi");
		}
	else
	{
		printf("you gotta pay around 30 %% boi");}
	return 0;
}
