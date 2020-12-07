#include <iostream>
// #include "run.h"
using namespace std;

int countPath(int s,int e){
	if(s==e){
		return 1;
	}
	if(s>e){
		return 0;
	}
	int count=0;
	for(int i=1;i<=6;i++){
		count+=countPath(s+i,e);
		// pata ni kya ho raha hei yaha pe
	}
	return count;
}

int main(){
	cout<<countPath(1,4)<<endl;
	return 0;
}