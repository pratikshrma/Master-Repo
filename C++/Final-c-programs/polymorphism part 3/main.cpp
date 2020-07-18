#include <iostream>
using namespace std;		//pure virtual function and abstract classes
class enemy
{					//abstract class is just a class with a pure virtual function in it
	public:
	
		virtual void attack()=0;//pure virtual function dosent give you the option to inherit form base class
		
};

class ninja: public enemy
{
	public:
	void attack()//because now it is a pure virtual function you must overwrite it or otherwise error!!
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
