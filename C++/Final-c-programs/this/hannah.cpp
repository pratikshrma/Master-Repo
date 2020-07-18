#include <iostream>
using namespace std;
#include "hannah.hpp"


hannah::hannah(int num)
:h(num)

{
	
}
void hannah::printcrap()
{
	cout<<"h="<<h<<endl;				//implied
	cout<<"this->h"<<this->h<<endl;		//explicit
	cout<<"(*this).h"<<(*this).h<<endl;	//explicit
	}

