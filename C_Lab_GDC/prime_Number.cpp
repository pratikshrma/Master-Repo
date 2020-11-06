#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int sum=0;
	int div=1;
	if(n==2){
		printf("It is a prime Number\n");
		return 0;
	}
	for(int j=2;j<=n;j++){
		if(n%j==0){
			div++;
		}
	}
	if(div==2){
		printf("It is a prime Number");
	}
	else{
		printf("It is not a prime Number\n");
	}
	return 0;
}