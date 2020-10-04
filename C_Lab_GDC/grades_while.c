#include <stdio.h>
int main()
{
	int M;//Grades
	printf("Enter you Marks:- ");
	scanf("%d",&M);
	int grades_=M/10;
	printf("%d",grades_);
	switch(grades_){
		case 10:
			printf("Your grade is A++");
			break;
		case 9:
			printf("your Grades are A");
			break;
		case 8:
			printf("you grades are B");
			break;
		case 7:
			printf("your grades are C");
			break;
		default:
			printf("F bro~!");
	}
	return 0;
}
