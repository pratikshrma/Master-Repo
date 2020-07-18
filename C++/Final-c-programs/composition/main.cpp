#include <iostream>//a class can also have objects of other class as its members
//in thsi we gonna take object form birthady class and store it in people class and then running the main program from main
using namespace std;
#include "birthday.hpp"
#include "people.hpp"
int main()
{
	birthday birthobj(9,25,2002);
	people buckyroberts("aman the king", birthobj);
	buckyroberts.printinfo();
	
	return 0;
}
