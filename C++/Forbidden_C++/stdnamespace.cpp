// to understand it properly i suggest you to watch the vid by cherno on why he dosen't like using namespace std
// the technical name for this kind of problem is "namespace std contamination"


#include <iostream>
#include <algorithm>

using namespace std;

namespace ns1{
	void TestFunction(){
		std::cout<<"This is ns1"<<std::endl;
	}
}

namespace ns2{
	void TestFunction(){
		std::cout<<"This is ns2"<<std::endl;
	}
}

int max(int a,int b){
	if(a<b){
		return b;
	}
	else
	{
		return a;
	}
}

int main(){
	ns1::TestFunction();
	ns2::TestFunction();

	// now there is 4 other max function in the namespace std
	// so while the compiling this code it will not throw up an error but if you are getting the point the compiler will chose at random i think 
	// so to specify that you need to use the max function in the std lib becomes crucial

	int a=std::max(3,10);


	return 0;
}