#include <iostream>
#include <string>
using String=std::string;

class entity
{
	private:
	String m_Name;
	public:
	entity() : m_Name("unknowmn"){}
	entity(const String& name) : m_Name(name){}
	
	const String& GetName() const{return m_Name;}
	};

int main()
{
	int a=2;
	int* b= new int[50];//200 bytes
	entity* e = new entity[60];
	delete e;	
	}
