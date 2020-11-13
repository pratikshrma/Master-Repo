// so we have to fing the largest word in a sentence
#include <iostream>
using namespace std;
int main(){
	// largest
	int n;
	cin >> n;
	cin.ignore();  //ab isko pata ni kyu liya hei par dekta hie kisi na kisi kam to aai ga hi
	char arr[n+1];

	// usuall c++ ke compiler ko aadat hoti hei ki agar space aa gaya to word ko khatam karo par ab ham naya function use karage
	// ab get line kya karta hei ki agar space bhi aaya to ye use char mei store hoda;

	cin.getline(arr,n);
	cin.ignore();

	int i=0;
	int currlen=0;
	int maxLen=0;

	while(1){
		if(arr[i]=='\0'){
			break;
		}
		if(arr[i]==' ' || arr[i]=='\0'){
			currlen=0;
		}
		currlen++;
		maxLen=max(maxLen,currlen);
		i++;
	}

	cout<<maxLen-1<<endl;


	return 0;
}