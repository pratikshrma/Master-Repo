#include <iostream>
using namespace std;

class entity
{
	public:
	float x,y;
	void move(float x,float y)
	{
		
		x+=2;
		y+=2;
		}
	
	};
	
	
	class player : public entity
	{
		public:
		const char *name;
		void printname()
		{
			cout<<name<<endl;
			
			}		
			};

int main()
{
	
	cout<<sizeof(entity)<<endl;
	cout<<sizeof(player)<<endl;
	player p;
	p.move(5,5);
	
	return 0;
	}
