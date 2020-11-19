// it is used to print all the prime no in a given range
// to pehle ham ek array lega jaha tak bhi lena hoga fir ham 2 se start ho jai ge or iske sare multiple mark karana shuru
// kar dega or ye kara ge ham int(sqrt(last_no))  tak

//My implimentation
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int marker[int(n*sqrt(n))];
	for(int i=2;i<=n;i++){
		marker[i]=0;
	}
	cout<<sqrt(n)<<endl;
	for(int i=2;i<int(sqrt(n));i++){
		for(int j=2;j<n;j++){
			marker[i*j]=1;	
		}
	}
	for(int i=2;i<=n;i++){
		if(marker[i]==0){
			cout<<i<<endl;
		}
	}


	return 0;
}
