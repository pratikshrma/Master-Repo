#include <stdio.h>
int main()
{
	//tax
	//marks
	int M;
	printf("Enter your Marks:- ");
	scanf("%d",&M);
	if(M>=90)
	{
		printf("Your grades are: A");
	}
	else if(M>=80)
	{
		printf("Your grades are: B");
	}
	else if(M>=70)
	{
		printf("Your grades are: C");
	}
	else
	{
		printf("You failed sad life Bro!");
	}
	return 0;	
}
