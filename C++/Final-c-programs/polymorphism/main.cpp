#include <iostream>
using namespace std;//have same function and diff outcome
class enemy
{
	protected:
		int attackpower;
	public:
		void setattackpower(int a)
		{
			attackpower=a;
			
		}
	
};

class ninja: public enemy
{
		public:
		void attack()
		{
			cout<<"i am a ninja chop---"<<attackpower<<endl;
			
			
		}
	
	
	
};

class monster: public enemy
{
		public:
		void attack()
		{
			cout<<"monster must attack you----"<<attackpower<<endl;
			
			
		}
	
	
	
};


int main()
{
	ninja n;
	monster m;
	enemy *enemy1 = &n;				//because ninja is a type of monster this is valid
	enemy *enemy2 = &m;			   //anything that an enemy can do monster can do
	enemy1->setattackpower(29);   //ninja is just a more specific type of enemy
	enemy2->setattackpower(4099);//every enemy has setattackpower
	n.attack();					//cant use enemy1 bc its type enemy 
	m.attack();					//enemy class does not have attack
	
	return 0;
}
