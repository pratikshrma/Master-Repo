#include <iostream>
using namespace std;
int main(){
	int x=0;
	int opp;
	cin>>opp;
	while(opp--){
		string sign;
		cin>>sign;
		if(sign=="++X"){
			++x;
		}
		else if(sign=="X++"){
			x++;
		}
		else if(sign=="X--"){
			x--;
		}
		else if(sign=="--X"){
			--x;
		}
	}
	cout<<x<<endl;


	return 0;
}