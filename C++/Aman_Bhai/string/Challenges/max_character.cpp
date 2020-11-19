#include <iostream>
#include <string>

using namespace std;

int main(){
	string str="heoboiwhatsuphellllklllso";
	int arr[26];
	for(int i=0;i<26;i++){
		arr[i]=0;
	}
	for(int i=0;i<str.length();i++){
		// stoi use hota hie agar "767"  -->  767 karna hei to 
		arr[str[i]-'a']++;	
	}
	int Max=0;
	int max_index;
	for(int i=0;i<26;i++){
		if(arr[i]>=Max){
			Max=arr[i];
			max_index=i;
		}
	}
	char ch=(max_index + 'a');
	cout<<ch<<" And the max is "<<Max<<endl;
	// to_String use hota hei agar 34343 ko "34343" karna hei to


	return 0;
}