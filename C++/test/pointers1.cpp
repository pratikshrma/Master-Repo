#include <iostream>

void printcrap(int a);
void incriment(int* value);
void incriment(int &value);

int main()
{
	//pointers vs reference
	int a=10;
	incriment(&a);
	incriment(a);
	
	return 0;
}
void printcrap(int a)
{
	std::cout<<a<<std::endl;

}

void incriment(int *value)
{
	(*value)++;
	printcrap(*value);
	
}
void incriment(int &value)
{
	value++;
	printcrap(value);
	
}
