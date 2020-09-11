#include<stdio.h>
int main()
{
	int choice;
	printf("Press 1 for area of the circle and 2 for the area of the cylinder \n");
	scanf("%d",&choice);
	if(choice==1)
	{
		float r,area;
		printf("Enter the value of the Radius- ");
		scanf("%f",&r);
		area=((float)22/(float)7)*r*r;
		printf("SO the area of the circle is %f",area);
	}
	else if(choice==2)
	{
		float r,h,area;
		printf("Enter the radius of the cylinder ");
		scanf("%f",&r);
		printf("Enter the height of the cylinder ");
		scanf("%f",&h);
		area=(22.0/7.0)*r*r*h;
		printf("SO the area of the Cylinder is %f",area);		
	}
	else
	{
		printf("Invalid Choice");
	}
}
