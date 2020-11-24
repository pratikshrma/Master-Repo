#define ll long long

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
/*
acha pehle thode notes like ye vo robo vali prop hei to jse ki terko 5,6 pe jana hie

ot 				E?E?E?E?E?E   itne steps to min leana hi pdaga jo hei max(2*x,2*y)-1
ab 5,6 ke liye  ESESESESESE  COOL!
AB 2,6 ke liye  ESESERERERE   dekh rest le ke bhi utne hi ho jate hei 
*/
int x,y;
cin>>x>>y;
if(x==y){
	cout<<2*x<<endl;
	return;
}
else{
	cout<<max(2*x,2*y)-1<<endl;
	return;
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