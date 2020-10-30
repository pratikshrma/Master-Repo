#include <iostream>
using namespace std;
int main(){
	int tasks;
	cin>>tasks;
	for(int tasks_=0;tasks_<tasks;tasks_++){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int newarr[n];
		newarr[0]=arr[n-1];
		for(int i=1;i<n;i++){
			newarr[i]=arr[i-1];
			}
		for(int i=0;i<n;i++){
			cout<<newarr[i]<<" ";
		}

	}
	return 0;
}