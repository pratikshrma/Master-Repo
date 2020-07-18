#include <iostream>
using namespace std;

class sally
{
	public:
		static int yo = 80;
		sally()
		{
			cout<<"i am the constructor"<<endl;

		}
		
};

int main()
{
	sally* ptr=&yo;

	cout<<ptr<<endl;

	//std::cin.get();
	return 0;
}
