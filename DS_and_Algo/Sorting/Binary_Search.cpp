#include <iostream>
using namespace std;

int main()
{ 
	cout<<"Enter the no of test cases"<<endl;
	int n;//No of Tests
	cin>>n;
	for(int i=0;i<n;i++)//Main Loop
	{	
		int size,find;//Its kinda self-Explanitory
		cout<<"Enter the size of the array"<<endl;
		cin>>size;
		cout<<"Enter the value which you wanna find in this sorted array "<<endl;
		//cout<<"If the ans is none the ans will be zero"<<endl;
		cin>>find;
		int arr[size-1];
		for(int j=0;j<size;j++)
		{
			cout<<"Now enter the value "<<j+1<<endl;
			cin>>arr[j];
			//Cool we got the array
		}
		cout<<"Done Input"<<endl;
		//Now main Binary Search
		int result=-1;
		int first=arr[0];
		int last=arr[size-1];
		cout<<"Whiile loop is next"<<endl;
		while(last==first)
		{
			int key=(first+last)/2;
			if(arr[key]>find)
			{
				last=key;
			}
			else if(arr[key]<find)
			{
				first=key;
			}
			else if(arr[key]==find)
			{
				result=1;
				break;
			}
		}
		cout<<"So the result is "<<(result+1)<<endl;
	}
	return 0;
}
