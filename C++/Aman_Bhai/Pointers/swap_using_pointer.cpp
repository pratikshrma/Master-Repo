#include <iostream>
using namespace std;
void Swp(int *a, int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
	// to dekh hamne pointer bhaje the to esa soch ki pointer swap karne hei value ni
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<a<<" "<<b<<endl;;
	Swp(&a,&b);

	cout<<a<<" "<<b<<endl;


	return 0;
}