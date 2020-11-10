// /pointers are variable that store the address of other variable

#include <iostream>
using namespace std;
int main(){
	int a=10;
	int *aptr;  //yaha pe star isliye laga hei kyuki ham int type ke varible ki taraf point karna cahate hei agar 
	//a koi char ya floar hota to ham vo use karte

	aptr=&a;//yaha & bas batane ke liye ki aptr mei iska address send karna hei iski value 
	//ni iska adress kuch hexadecimal mei hoga vo send karna hei

	cout<<aptr<<endl;
	cout<<*aptr<<endl;  //now ab ham * use karte hei taki ham usko dereference kar pai
	




	return 0;
}