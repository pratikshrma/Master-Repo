#define ll long long

#include <iostream>
using namespace std;
void input(){
#ifndef hello
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
void solve(){
	//jse ki agar input agar 6 hei to ans 60 hoga kyuki 60 6,5,4,3,2,1 sabse div hei
	int n;
	cin>>n;
	int guess=n*2;
	bool temp=true;
	while(guess<100){
		for(int i=n;i>0;i--){
			if(i%guess!=0){
				temp=false;
				cout<<"Test "<<i<<endl;
				cout<<guess<<endl;
			}
		}
		if(temp==true){
			cout<<guess<<endl;
			// break;
			return;
		}
		guess=guess+n;
	}



}
int main() {
	input();

	int n;
	cin>>n;
	while(n--){
		solve();
	}


	return 0;
}