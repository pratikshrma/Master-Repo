#include <iostream>
using namespace std;		//have same function and diff outcome
class enemy
{
	public:
	
		virtual void attack(){}	
	
};

class ninja: public enemy
{
	public:
	void attack()
	{
		cout<<"ninja attack--"<<endl;
	}
};

class monster: public enemy
{
	public:
	void attack()
	{
		cout<<"monster attack--"<<endl;
	}
	
};


int main()
{
	ninja n;
	monster m;
	enemy *enemy1 = &n;
	enemy *enemy2 = &m;
	enemy1->attack();
	enemy2->attack();
	
	
	return 0;
}
