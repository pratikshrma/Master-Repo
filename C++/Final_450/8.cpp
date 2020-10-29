#include <iostream>
#include <climits>
using namespace std;

int totalSum(int arr[],int n){
    int sum=0;
    int max_=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(max_<sum){
            max_=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    return max_;
}

int main(){
    int yo;
    cin>>yo;
    for(int yo_=0;yo_<yo;yo_++){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int finalans=totalSum(arr,n);
        cout<<finalans<<" "<<endl;

    }
    return 0;
}
