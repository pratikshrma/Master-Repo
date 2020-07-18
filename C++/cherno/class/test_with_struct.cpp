#include <iostream>
using namespace std;
struct player//it is by default public:
{
	int x=7;
	int y=67;
	int speed=578;
	void move(int xa, double ya)
	{
		x+=xa+speed;
		y+=ya+speed;
		cout<<x<<endl;
		cout<<y<<endl;
		}
	
};

int main()
{
	player yo;
	yo.move(10,10);
	return 0;
} 
