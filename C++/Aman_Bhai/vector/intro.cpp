/*
it is a dynamic array and is also an stl part
*/

#include <iostream>
#include <vector>
using namespace std;
int main(){

	std::vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}//1 2 3

	vector<int>::iterator it; //thats how you initialize an iterator
	for(it=v.begin();it!=v.end();it++){
		cout<<*it<<endl;
	}//1 2 3

	for(auto element:v){
		cout<<element<<endl;
	}

	return 0;
}