#include <iostream>
using namespace std;
void input(){
#ifndef hello
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
}
void solve(){
	int n,q;
	cin>>n>>q;
	string s;
	cin>>s;
	while(q--){
	int l,r;
	cin>>l>>r;
	--l;
	--r;
	bool bad=true;
	for(int i=0;i<l;i++){
		if(s[i]==s[l])
		bad=false;
	}
	for(int i=r+1;i<n;i++){
		if(s[r]==s[i])
		bad=false;
	}
	cout<<(bad?"NO":"YES")<<endl;
}

}
int main() {
	//input();

	int n;
	cin>>n;
	while(n--){
		solve();
	}


	return 0;
}