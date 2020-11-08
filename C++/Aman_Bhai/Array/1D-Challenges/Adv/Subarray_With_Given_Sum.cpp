// dekh iski to hei ek simple approch bhi jo pehle discuss kar chuke hei jo hei first find all the subarray and then see is any of this matches
// if matches then output the index of the starting and the ending array

// par uske sath hei scene or vo hei O(N2) ye vala scene to time limit exceed ho jati hei
// ab dekta hei optamized approch
// uska name hei TWO POINTER APPROCH

// damn kafi sahi approch hei noice
#include <iostream>
using namespace std;
int main(){

	int n,s;
	cin>>n>>s;


	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int i=0, j=0, st=-1, en=-1,sum=0;
	while(j<n && sum+a[j]<=s){
		sum+=a[j];
		j++;
	}

	if(sum==s){
		cout<<i+1<<" "<<j<<endl;
		return 0;
	}
	while(j<n){
		sum+=a[j];
		while(sum>s){
			sum-=a[i];
			i++;
		}
		if(sum==s){
			st=i+1;
			en=j+1;
			break;
		}
		j++;
	}
	cout<<"So the array starts form "<<st<<" till "<<en<<endl;


	return 0;
}