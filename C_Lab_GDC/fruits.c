#include <stdio.h>
int main()
{
	int a;
	printf("Enter a number:- ");
	scanf("%d",&a);
	switch(a){
		case 1:
			printf("Apple");
			break;
		case 2:
			printf("Mango");
			break;
		case 3:
			printf("litchi");
			break;
		case 4:
			printf("WaterMelon");
			break;
		default:
			printf("No fruit");
			break;
		}
	return 0;
}
