
#include <iostream>
using namespace std;

/*its just dealing with a specific type of data like you input string in your calculater it cannot handel string 
	type data so to deal with it seperatly we use this*/


template<class T>
class spunky
{
	public:
	spunky(T x)
	{
		cout<<x<<"-- is not a character"<<endl;
	}
};

template<>
class spunky<string>
{
	public:
	spunky(string x)
	{
		cout<<x<<" --is indeed a character"<<endl;
		}
	};
int main()
{	
	
	spunky<int> obj1(7654);
	spunky<double> obj2(784.748);
	spunky<float> obj3(758349.784930);
	spunky<string> obj4("aman");
	
	return 0;
	}
