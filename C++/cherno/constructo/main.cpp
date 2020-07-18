#include <iostream>

class entity
{
	public:
	float x,y;
	entity()
	{
		
		
		}
	entity(float X,float Y)
	{	
		x=X;
		y=Y;
		}
	void print()
	{
		std::cout<<x<<","<<y<<std::endl;
		}
	
	
	};
	
class log
{
	private:
	log(){}//ab iski vjha se koi isko esa log l; call nqahi kar paiga 
	
	/*yo yahi sab log()=delete; kar ke bhi kar sakte hei
	 * ye construxtor ko delete kar dega  */
	
	public:
	static void write()
	{
		
		
		}
	
	};

int main()
{
	
	log::write();
	
	entity e(10,5);
	std::cout<<e.x<<std::endl;
	e.print(); 
	
	}

