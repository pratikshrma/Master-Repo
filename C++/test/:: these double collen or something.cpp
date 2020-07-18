#include <iostream>
class sally
{
	public:
	sally();
	void printcrap();
	int addition(int a,int b);
};
int main()
{
	sally sallyobj;
	sallyobj.printcrap();
	std::cout<<sallyobj.addition(9,9);
	
	return 0;
	
	}


sally::sally()
{
	}

void sally::printcrap()
{
	std::cout<<"hello bitches"<<std::endl;
	
	}

int sally::addition(int x,int y)
{
	return x+y;
	
	
	} 
