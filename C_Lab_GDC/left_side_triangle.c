#include <stdio.h>
int main(){
	int n=5;
	int t=0;
	for(int i=0;i<n;i++){
		t=i;
		for(int j=0;j<i;j++){
			if(t%2==0){
				printf(" ");
				++t;
			}
			else{
				printf("*");
				++t;
			}
		}
		
		printf("\n");
	}
	for(int i=n;i>0;i--){
		t=i;
		for(int j=i;j>0;j--){
			if(t%2==0){
				printf(" ");
				++t;
			}
			else{
				printf("*");
				++t;
			}
		}
		
		printf("\n");
	}

}
		

