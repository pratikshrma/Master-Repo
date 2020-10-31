#include <iostream>
using namespace std;
int main(){
	int x=0;
	int y=0;
	

	if(y==1) goto Part1;//goto allows you to add parts in any program.
	// if you use goto you endup using more goto in your program and there is always a more simpler way to code stuff
	if(y==2) goto Part2;

Part1:
	x++;
Part2:
	x--;
// but therre are also some usefull benefits of using goto like
	for(int i=0;i<100;i++){
		for{int j=0;j<100;j++}{
			if(i==34 && j=89){
				goto panic;
				// now we could also use break in this case like convensional style but in this case there is nothing wrong with using goto
			}
		}
	}

panic:
	//stay calm and carry on 

	cout<<x<<endl;


	return 0;
}