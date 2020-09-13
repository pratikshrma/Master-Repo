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
    for(int i=0;i<NOQ;i++)
    {
		int key;
        int find=Qarr[i];
        cout<<"Queri "<<i<<" is "<<Qarr[i]<<endl;
        int first=arr[0];
        int last=arr[number-1];
        cout<<"While looop "<<i<<" starts"<<endl;
        while(first==last)
        {
            key=(first+last)/2;
            if(arr[key]>find)
            {
                last=key;
            }
            else if(arr[key]<find)
            {
                first=key;
            }
            else
            {
				cout<<"AND NOW THE MAIN ANS IS ";
				cout<<key<<endl;
				cout<<""<<endl;
				break;
            }
        }   
    }
	return 0;
}
