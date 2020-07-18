#include <iostream>
#include <string>
using namespace std;

class amanclass
{
	public:
		amanclass(string z)//this is a constructor
		{
			setname(z);
			}
			void setname(string x)
			{
				name=x;
				}
				string getname()
				{
					return name;
					}
	private:
		string name;
		
};
	
int main()
{
	amanclass ao ("aman sharma yo bro");
	cout<<ao.getname()<<endl;
	//you can creat multiple objects and the donot overwrite each other
	amanclass ao2("hell yeah");
	cout<<ao2.getname();
	return 0;
}
