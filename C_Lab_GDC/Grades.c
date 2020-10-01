#include <stdio.h>
int main()
{
	int M;//Marks
	printf("Enter you Marks:- ");
	scanf("%d",&M);
	char G=(M>90)?'A':((M>80)?'B':((M>70)?'C':'F'));
	printf("SO your Grades are %c",G);
	return 0;
}
