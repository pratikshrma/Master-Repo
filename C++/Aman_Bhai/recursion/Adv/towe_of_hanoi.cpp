#include <string>
#include <iostream>
using namespace std;

void towerOfHanoi(int n,char scr,char dest,char helper){
	if(n==0){
		return;
	}
	towerOfHanoi(n-1,scr,helper,dest);
	cout<<"Moved from "<<scr<<" to "<<dest<<endl;

	towerOfHanoi(n-1,helper,dest,scr);
	//damn pehli bar mei to samaj hi ni aaya
	//isme aate hei thoda bad mie hi LOL
}

int main(){
	towerOfHanoi(3,'A','C','B');

	return 0;
}