#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<=5;i++)
    {
        for(int k=i;k<=5;k++)
        {
            cout<<" ";
        }
        
        for(int j=i;j>0;j--)
        {
            cout<<j;
        }
        for (int k=0; k<=i; k++)
        {
            cout<<k;
        }
        
        cout<<endl;
    }
}