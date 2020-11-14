// so this is sorthing 
// Y Z X -> X Y Z   now why would you ever wanna do this ???
// to be fair i dont know as well 

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
	string s1="fdjsklfjdskljshjkk";

	sort(s1.begin(),s1.end());
	cout<<s1<<endl;


	return 0;
}