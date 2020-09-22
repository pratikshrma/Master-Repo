#include<stdio.h>
int main()
{
	int a=5;
	int b=5;
	int c=10;
	int result;
	result=(a==b)&&(c>b);
	printf("%d\n",result);
	result=(a==b)&&(c<b);
	printf("%d\n",result);
	result=(a==b)||(c<b);
	printf("%d\n",result);
	result=(a!=b)||(c<b);
	printf("%d\n",result);
	result=!(a!=b);
	printf("%d\n",result);
	result=!(a==b);
	printf("%d\n",result);
	

}
