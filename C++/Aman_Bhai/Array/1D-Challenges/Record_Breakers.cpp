// is problem ke liye ek to hei optamized approch jisme ham sare elements ke uper itterate karage or uski order of complexity O(n2) aa jai gi ye de dega time limit exeeded to hamko koi optamized approch use karni pdagi


//optamized approch:-
// 


#include <iostream>
using namespace std;
int main(){

	int n;
	cin>>n;
	int a[n+1];

	a[n]=-1;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(n==1){
		cout<<"1"<<endl;
		return 0;
	}
	int ans=0;
	int mx=-1;

	for(int i=0;i<n;i++){
		if(a[i]>mx && a[i]>a[i+1]){
			ans++;
		}
		mx=max(mx,a[i]);
	}
	cout<<"So the record breaking days are :- "<<ans<<endl;
	
	return 0;
}