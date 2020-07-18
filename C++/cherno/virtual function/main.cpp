/*
 * 
 */
#include <iostream>
#include <string>

class entity
{
	public:
	std::string getname()
	{
		return "Entity";
		}
	
		
	};
class player: public entity
{
	private:
	std::string m_name;
	public:
	player(const std::string& name): m_name(name)//ye : ke bad vali line pata ni kya karti hei??
	{
		}
	
	std::string getname()
	{
		return m_name;
		}
	
	};
int main()
{
	entity* e = new entity();
	std::cout<<e->getname()<<std::endl;
	
	player* p = new player("aman");
	std::cout<<p->getname()<<std::endl;
	
	}
