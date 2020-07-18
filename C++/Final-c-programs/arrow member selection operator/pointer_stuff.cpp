#include <iostream>
using namespace std;
class area
{
	private:
	int l;
	int b;
	public:
	area(int length,int bredth)
	{
	l=length;
	b=bredth;
	}
	int getarea()
	{
	return l*b;
	}
	};

int main()
{
	area a(5,2);
	area* ptr = &a;//jab bhi pointe kisi dusri class mei lena hota
					//hie pointer ka datatype or class ka nam same hota hei 
	int rect= ptr->getarea();//(pointer_name -> variable_name)
	cout<<"area of rect is "<<rect<<endl;
	return 0;
	}
