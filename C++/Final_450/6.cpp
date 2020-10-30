#include <iostream>
using namespace std;
int main(){
	int test_case;
	cin>>test_case;
	for(int case_=0;case_<test_case;case_++){

		int n,m;
		cin>>n>>m;
		int no=n+m;
		int arr[no];
		for(int i=0;i<no;i++){
			cin>>arr[i];
		}
		for(int i=0;i<no-1;i++){
			for(int j=i+1;j<no;j++){
				if(arr[i]>=arr[j]){
					int swp=arr[i];
					arr[i]=arr[j];
					arr[j]=swp
					;
				}
			}
		}
		
		int count=0;
		for(int i=0;i<no;i++){
			if(arr[i]!=arr[i+1]){
				count++;
			}
		}
		cout<<count<<endl;

	}
	return 0;
}