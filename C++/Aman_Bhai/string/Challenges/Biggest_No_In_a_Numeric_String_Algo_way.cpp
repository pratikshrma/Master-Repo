#include <iostream>
#include <algorithm>

using namespace std;
int main(){
	string s="4378473287";

	sort(s.begin(),s.end(),greater<int>());  //ab pata ni 3rd parameter kya karta hei lol


	cout<<s<<endl;



	return 0;
}