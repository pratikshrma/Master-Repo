#include "people.hpp"
#include <iostream>
using namespace std;

people::people(string x,birthday bo)   /*when ever working with class inside a class {# people.hpp}we 
										need to use a member initilizer a*/
: name(x), 
dateofbirth(bo)
{
	
}
void people::printinfo()
{
	cout<<name<<"was born on";
	dateofbirth.printdate();
	
	}
