#include <iostream>
using namespace std;
int main()
{
    int a;
    int f;
    int no;
    int arr[10];
    cin>>no;
    for(int i=0;i<no;i++)
    {
        cin>>arr[i];
    }
    cin>>f;
    for(int i=0;i<no;i++)
    {
        if(f==arr[i])
        {
            i=a;
        }
    }
    cout<<a<<endl;
    return 0;
}