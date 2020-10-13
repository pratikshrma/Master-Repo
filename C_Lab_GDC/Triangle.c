#include <stdio.h>
int main()
{
	int tr_size;//triangle size
	printf("Enter the size of the triangle:- ");
	scanf("%d",&tr_size);
	int spaces=(tr_size);
	for(int i=0;i<=tr_size;i++)
	{
		for(int k=spaces-1;k>=0;k--)
		{
		printf(" ");
		}
		spaces--;
		int stars=(2*i)+1;
		for(int j=0;j<stars;j++)
		{
			printf("%c",i+65);
		}
		printf("\n");
	}
	return 0;
}
