#include <iostream>
#include <string>
using namespace std;

class amanclass
{ 
	public:
			void setname(string x)
			{
				name=x;
				}
				string getname(){
					return name;
					}
	private:
		string name;
		
};
	
int main()
{
	amanclass ao;
	ao.setname("aman sharma");
	cout<<ao.getname()<<endl;
	return 0;
}
