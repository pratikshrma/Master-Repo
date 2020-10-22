#include<stdio.h>
int main()
{
    for(int i=0;i<=5;i++)
    {
        for(int k=i;k<=5;k++)
        {
            printf(" ");
        }
        for (int k=1;k<=i; k++)
        {
			printf("%d",k);
        }
        for(int j=i-1;j>0;j--)
        {
            printf("%d",j);
        }
        
        printf("\n");
    }
}
