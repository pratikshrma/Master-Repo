#include<stdio.h>
int main()
{
	char a;
	printf("Enter a Char To convert it into a lowercase:- ");
	scanf("%c",&a);
	if(a>=65 && a<=90)
	{
		a=a+32;
	}
	printf("%c",a);
	return 0;
}
