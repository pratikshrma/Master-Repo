// it has something to with the greedy algo

#include <iostream>
using namespace std;

void solve()
{
	string str;
	cin>>str;
	int paren=0;
	int bracket=0;
	int ans=0;
	for(int i=0;i<str.length();i++){
		if(str[i]=='('){
			paren++;
		}
		else if(str[i]=='['){
			bracket++;
		}
		else if(str[i]==')'){
			if(paren>0){
				paren--;
				ans++;
			}
		}
		else if(str[i]==']'){
			if(bracket>0){
				bracket--;
				ans++;
			}
		}
	}
	cout<<ans<<endl;
}

int main(){
	int test;
	cin>>test;
	while(test--){
		solve();
	}	
	
	
	return 0;
}