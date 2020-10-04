#include <stdio.h>
int main()
{
	char G;//Grades
	printf("Enter you grades:- ");
	scanf("%c",&G);
	switch(G){
		case 'A':
			printf("your marks should be above 90");
			break;
		case 'B':
			printf("your marks should be in between 80 to 90");
			break;
		case 'C':
			printf("your marks should be in between 70 to 80");
			break;
		default:
			printf("Dude your marks are below 70");
	}
	return 0;
}
