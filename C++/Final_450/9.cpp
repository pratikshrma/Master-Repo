// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;





class Solution{   
public:
    int getMinDiff(int arr[], int n, int k) {
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                    int swp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=swp;
                }
            }
        }
       
       for(int i=0;i<n;i++){
            if(arr[i]<arr[n/2]){
                arr[i]+=k;
            }
            else{
                arr[i]-=k;
            }
        }
        

        int shortest=arr[0];
        int largest=arr[n-1];
        cout<<"\nSO the shortest is "<<shortest;
        cout<<"\nSo the largest is "<<largest<<endl;
        return largest-shortest;
    }
};






// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends