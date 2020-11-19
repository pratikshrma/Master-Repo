#include <iostream>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n,c0,c1,h;
		cin >>n>>c0>>c1>>h;
		long long int ans=0;
		string s;
		cin>>s;
		int zero=0;
		int one=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='o'){
				zero++;
			}
			else{
				one++;
			}
		}
		ans=zero*min(c0,c1+h)+one*min(c1,c0+h);
		cout<<ans<<endl;


	}

	return 0;
}