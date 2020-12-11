#include <iostream>
#include <array>
using namespace std;

int* makeZeroArray(int n){
	int *A=new int[n];
	for(int i=0;i<n;i++){
		A[i]=0;
	}
	return A;
}

void newArray(int *arr,int n){
	for(int i=0;i<=n;i++){
		arr[i]=i+1;
	}
	for(int i=0;i<=10;i++){
		cout<<*(arr+i)<<endl;//hypothysis ki i bhi int hei or array bhi int hei
		//to jab ham isme i add kar kahe hei to vo actually 4 bytes add ho rahe hei!!
		//merko kyu lagte hei ki ye agar array char hota to thoda change ho jai ga

		// ye assumption galat hei tere lol
	}
	int noChar=26;
	char *alpha=new char[noChar];
	for(int i=0;i<noChar;i++){
		alpha[i]=i+'a';
	}
	// for(int i=0;i<noChar;i++){
	// 	cout<<alpha[i]<<endl;//ab ye dekh ye kar raha hei sahi print par ab ye karke try karte hei
	// }
	for(int i=0;i<noChar;i++){
		cout<<(*alpha+i)<<endl;//acha thk hei ab pata ni ho kya raha hei is code mei 
		//ye iske ascci code print kar raha hei
	}
	for(int i=0;i<noChar;i++){
		cout<<*(alpha+i)<<endl;//acha thk hei ab pata ni ho kya raha hei is code mei 
		//ye mast vohi print kar raha hei jo isko karna cahia
	}
	for(int i=0;i<noChar;i++){
		cout<<(alpha+i)<<endl;//acha thk hei ab pata ni ho kya raha hei is code mei 
		//ye pata ni apne alag hi fun mei hei!!!	
	}
	for(int i=0;i<noChar;i++){
		cout<<&alpha+i<<endl;
	}
	cout<<endl;
	cout<<&alpha<<endl;

}

int main(){
	int n=5;
	int *arr=makeZeroArray(n);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	cout<<endl;

	newArray(arr,n);


	return 0;
}