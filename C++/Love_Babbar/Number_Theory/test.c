#include <stdio.h>
int main()
{
	for(int i=0;i<=6;i++)
	{
		for(int j=0;j<=6;i++)
		{
			if(i==0||i==6){printf("*");}
			else if(i==1||i==5){
				if(j<=2){printf("*");}
				else if(j>3){printf("*");}
				}
			else if(i==2||i==4){
					if(j<=1){printf("*");}
					else if(j>5){printf("*");}
				}
			else if(i==3){
					if(j==0){printf("*");}
					else if(j==6){printf("*");}
				}
		}
	}
	return 0;
}
