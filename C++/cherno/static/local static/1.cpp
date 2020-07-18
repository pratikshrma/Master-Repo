//if we define a static in a classs it gonna be local to that class
//but if we decleare it in a function its gonna be local to the function i guess hopefully 

//====================================
#include <iostream>

class aman{
	
	public:
	static aman& get()
	{
		static aman instance;
		return instance;
	
	}
		void hello()
		{}
	};

aman* aman::instance= nullptr;

void function()
{

	static int i;
	std::cout<<i++<<std::endl;
	}
int main()
{
	
		aman::get().hello();
	return 0;
	}
