#include <iostream>
using namespace std;

int volume(int l=1,int w=1,int h=1);//it will always use these default values unless user overwrites it

int main()
{
	cout<<volume(5)<<endl;/*if there is only one value it will assume that its like 5,1,1 or 
							simplly it will asume that its the first parameter ie length*/
	return 0;
}

int volume(int l,int w,int h)/*nd you should not rewrite the same argument ie dont
								write the default value here JUST DONT I TRIED THAT SHIT IT WILL JUST BREAK EVERYTHING*/
{
	return l*w*h;
	
	}
