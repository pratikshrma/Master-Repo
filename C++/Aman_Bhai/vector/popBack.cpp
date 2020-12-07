#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> v2;//(3); //this will allocate 3 size vector
	//acha to pehle 3 space asign karke ye unko 0 bhi kar deta hie to 3 bar puch back karne ke bad ans
	// 0 0 0 1 2 3 ho jai ha noice

	v2.push_back(1);
	v2.push_back(2);
	v2.push_back(3);
	vector<int> v3(3,50); //this will allocate 3 size vector and assign 50 to each one of them ie 50 50 50

	swap(v2,v3); //isse v2 ki value v3 mei aa jai gi or v3 ki value v2 mei aa jai gi

	for(auto hi:v2){
		cout<<hi<<endl;
	}
	cout<<"++++++"<<endl;

	for(auto hello:v3){
		cout<<hello<<endl;
	}

	sort(v2.begin(),v2.end());


	return 0;
}