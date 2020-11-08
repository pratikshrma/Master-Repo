// to isme diff klya hei baki simple max subarray prob se
// bas assume kar le ki array ek circle hei like 12345 or 51234 or 45123 same hei 


// 4 -4 6 -6 10 -11 12   ab agar ye circular ni hota to iska ans hota 12 par ab ye circular hei to iska max subarray
// 22 ho jai ga

// to isme main yad rakhne vali bat ye hei ki ham pehle to sabhi elements ka sign change kar dega fir ham lagai ge kadane algo fir 
// usko lagane ke bad sabse useless element ko bahar nikal dega

// Max subarray sum=Total sum of array- sum of non contributing elements



#include <iostream>
#include <climits>
using namespace std;

int Kadane(int arr[],int n){
	int currentSum=0;
	int maxSum=INT_MIN;
	for(int i=0;i<n;i++){
		currentSum+=arr[i];
		if(currentSum<0){
			currentSum=0;
		}
		maxSum=max(maxSum,currentSum);
	}
	return maxSum;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int wrapSum;
	int nonWrapSum;
	nonWrapSum=Kadane(arr,n);

	int totalSum=0;
	for(int i=0;i<n;i++){
		totalSum+=arr[i];
		arr[i]=-arr[i];
	}
  

	wrapSum=totalSum + Kadane(arr,n);


	cout<<max(wrapSum,nonWrapSum);
	return 0;
}