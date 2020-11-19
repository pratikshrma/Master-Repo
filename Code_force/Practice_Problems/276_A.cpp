#include <climits>
#include <iostream>
using namespace std;
int main(){
	int n;
	int k;
	cin>>n>>k;
	int Time[n];
	int Fun[n];
	for(int i=0;i<n;i++){
		cin>>Fun[i]>>Time[i];
	}
	int Actual_Fun[n];
	for(int i=0;i<n;i++){
		Actual_Fun[i]=INT_MIN;
	}
	for(int i=0;i<n;i++){
		if(Time[i]>k){
			Actual_Fun[i]=Fun[i]-(Time[i]-k);
		}
		else
		{
			Actual_Fun[i]=Fun[i];
		}
	}
	int Max_Fun=INT_MIN;
	for(int i=0;i<n;i++){
		if(Max_Fun<Actual_Fun[i]){
			Max_Fun=Actual_Fun[i];
		}
	}
	cout<<Max_Fun<<endl;



	return 0;
}