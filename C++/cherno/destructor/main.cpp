
#include <iostream>

class entity
{
	public:
	float x,y;
	entity()
	{
			std::cout<<"entityu ceated"<<std::endl;
		
		
		}
	entity(float X,float Y)
	{	
		x=X;
		y=Y;
		std::cout<<"entityu ceated"<<std::endl;
		
		}

	~entity()
	{
		std::cout<<"destroyed entity"<<std::endl;
		
		
		}
	void print()
	{
		std::cout<<x<<","<<y<<std::endl;
		}
	
	
	};
	
void function()
{
	
	entity e;
	e.print();
	}

int main()
{
	
	function();
	
	}

