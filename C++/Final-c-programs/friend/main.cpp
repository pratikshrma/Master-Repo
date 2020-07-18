#include <iostream>
using namespace std;

class aman
{
	public:
	aman(){var=0;}
	private:
	int var;
	
	friend void amanfriend(aman &sfo);
	
	
	};

void amanfriend(aman &sfo)
{
	sfo.var=99;
	cout<<sfo.var<<endl;
	
	}
int main()
{
	aman bob;
	amanfriend(bob);

	return 0;
}
