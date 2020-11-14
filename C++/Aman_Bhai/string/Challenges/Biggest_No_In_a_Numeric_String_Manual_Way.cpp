#include <iostream>
using namespace std;
int main(){
	string s="7483789374893";

	for(int i=0;i<s.length()-1;i++){
		for(int j=i+1;j<s.length();j++){
			if(s[j]>=s[i]){
				int swp=s[j];
				s[j]=s[i];
				s[i]=swp;
			}
		}
	}
	cout<<s<<endl;
	




	return 0;
}