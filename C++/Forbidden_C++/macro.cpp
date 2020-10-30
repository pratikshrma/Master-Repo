#include <iostream>
#define Max(a,b)((a<b)?b:a)
// now whats wrong with macro is that they seem like a function but certainly they are not a function and they are not exicuted at the run time
//purely a preprocessor  

// BUT IF YOU USE THEM CORRECTLY THEY ARE QUITE USEFUL AND THEY ALSO GOT A SYNTAX OF THERE OWN JSUT GOOGLE IT IT QUITTE FUN S

// AND IT ALSO EASY to do pranks with just do
//#define int char  
//

using namespace std;
int main(){

	for(int i=0;i<10;i++){
		std::cout<<Max(rand()%10,5)<<std::endl;
	}
	return 0;
}