
#include <stdio.h>
int main()
{
	
	int a;
	printf("Enter the size of the triangle");
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=i;j++)
		{
			int yo=j%2;
			printf("%d",yo);
		}
		printf("\n");
	}
	return 0;
}
