#include <iostream>

struct entity
{
	static int x,y;
	static void print()
	{
		std::cout<<x<<", "<<y<<std::endl;
		}
	
	};
	
int entity::x;
int entity::y;
	
int main()
{
	entity e;
	
	entity::x=2;
	entity::y=3;
	
	
	entity e1;
	entity::x=5;
	entity::y=7;
		entity::print();
		entity::print();//test1.cpp dekh le agar samj ni aa raha hei to zaad kuch hei ni vs isme 
	std::cin.get();
	
	return 0;
	
	}
