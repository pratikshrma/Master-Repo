#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter total no of Array Elements"<<endl;
    cin>>number;
    int arr[number-1];
    for(int i=0;i<number;i++)
    {
		cout<<"Enter the"<<" "<<i+1<<" Element"<<endl;
        cin>>arr[i];
    }
    int NOQ;//Number of queries
    cout<<"Enter no of Queries"<<endl;
    cin>>NOQ;
    int Qarr[NOQ-1];
    for(int i=0;i<NOQ;i++)
    {
		cout<<"Enter the"<<" "<<i+1<<"Queri"<<endl;
        cin>>Qarr[i];
    }
    cout<<"Noq for loop starts"<<endl;
    
    //
    //A REDESIGN IS REQUIRED
	//
	
	return 0;
}
