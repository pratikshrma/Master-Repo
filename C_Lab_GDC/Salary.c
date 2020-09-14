#include <stdio.h>
int main()
{
	int ta,da,total,salary;
	printf("Enter your salary\n");
	scanf("%d",&salary);
	printf("Enter your TA\n");
	scanf("%d",&ta);
	printf("Enter your DA\n");
	scanf("%d",&da);
	total=salary+ta+da;
	printf("So the total value is %d",total);
	if(salary>=5000)
	{
		total=total+1000;
	}
	printf("So the total value is %d",total);
	
	return 0;
}
