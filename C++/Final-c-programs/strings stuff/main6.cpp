#include <iostream>
#include <string>  //gives you string function
using namespace std;
int main()
{
	string one("apples ");
	string two("beans ");
	cout<<one<<two<<endl;
	one.swap(two);
	cout<<one<<two<<endl;
	
	
	return 0;
}
