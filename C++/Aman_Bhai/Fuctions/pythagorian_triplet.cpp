#include <math.h>
#include <iostream>
using namespace std;

bool check(int arr[3]){
	if(sqrt((arr[0]*arr[0])+(arr[1]*arr[1]))==arr[2]){
		return true;
	}
	else{return false;}

}
int main(){

	int numbers[2];
	cout<<"Enter three numbers\n and please make sure that they are in ascending order\n";
	cin>>numbers[0]>>numbers[1]>>numbers[2];
	if(check(numbers)==true)
	{
		cout<<"IT is a pythagorian triplet\n";
	}
	else{
		cout<<"It is not a pythagorian triplet\n";
	}
	return 0;
}