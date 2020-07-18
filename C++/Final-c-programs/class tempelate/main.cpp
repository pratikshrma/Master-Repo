#include <iostream>
using namespace std;

template <class T>
class bucky 
{
	
	T first, second;
	public:
	bucky(T a,T b)
	{
		first=a;
		second=b;
	} 
	T bigger();
};
template <class T>//every single function you build you need to proceed with this template
T bucky<T>::bigger()  //alse you need to include blank generic datatype ie <T>
{
	return (first>second?first:second);
	
	}


int main()
{
	bucky <int> bo(69,96);//<int> is what compiler gonna swap with T//and you need to explicitly do this shit
	cout<<bo.bigger();
	return 0;
}
