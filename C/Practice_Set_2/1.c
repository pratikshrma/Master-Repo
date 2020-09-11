#include<stdio.h>
int main()
{
	float sub1,sub2,sub3;
	printf("Enter the marks in subject 1 ");
	scanf("%f",&sub1);
	printf("Enter the marks in subject 2 ");
	scanf("%f",&sub2);
	printf("Enter the marks in subject 3 ");
	scanf("%f",&sub3);
	float per=((sub1+sub2+sub3)/300)*100;
	printf("your Percentage is  %f \n",per);
	if(per<=40)
	{
		printf("The student Failed");
	}
	else
	{
		if(sub1>33 && sub2>33 && sub3>33)
		{
			printf("The Student passed");
		}
		else
		{
			printf("The student faliled");
		}
	}
	return 0;
}
