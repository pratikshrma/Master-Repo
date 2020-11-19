// /https://codeforces.com/problemset/problem/116/A

#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int total=0;
	int Max=0;
	while(n--){
		int enter,Exit;
		cin>>Exit>>enter;
		total+=enter;
		total-=Exit;
		if(total>Max){
			Max=total;
		}
	}	
	cout<<Max<<endl;


	return 0;
}