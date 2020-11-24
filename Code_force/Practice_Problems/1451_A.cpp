#include <iostream>
using namespace std;
// void input(){
// #ifndef hello
// 	// for getting input from input.txt
// 	freopen("input.txt", "r", stdin);
// 	// for writing output to output.txt
// 	freopen("output.txt", "w", stdout);
// #endif
// }
int solve(){
	int n;
	cin>>n;
	if(n==1){
		// cout<<1<<endl;
		return 0;
	}
	if(n==2){
		// cout<<2<<endl;
		return 1;
	}
	int count=0;
	while(n>2){
		int check=n%2;
		if(check==0){
			int Div=n/2;
			n=n/Div;
			count++;
		}
		else{
			n--;
			count++;

		}
	//	cout<<count+1<<endl;
	}
	return count+1;
}
int main() {
	//input();

	int n;
	cin>>n;
	while(n--){
		cout<<solve()<<endl;
	}


	return 0;
}