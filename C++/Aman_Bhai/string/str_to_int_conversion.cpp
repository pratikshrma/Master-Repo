#include <iostream>
using namespace std;
int main(){
	string s1="789";
	int x =stoi(s1); //iska matlab hota hei strint to integer
	cout<<x+1<<endl;


	// ab iska rev bhi kar sakte hie

	int y=1000;
	cout<<to_string(y)+"6"<<endl;

	// acha ye sab to sahi hei par mena kuch or bhi try karna tha
	float hell=3434.434;
	string no="789";
	int hello=(int)hell; //ok to ye chez hei agar int ko float mei karna hei ya vsa kuch string ko int mei ye vice
	// versa karna ke liye stoi ya to_string functions hi use karne pdage Cool



	return 0;
}