#include <stdio.h>
int main(){
	int sum=0;
	for(int i=2;i<=50;i++){
		int div=1;
		for(int j=2;j<=i;j++){
			if(i%j==0){
				div++;
			}
		}
		if(div==2){
			printf("%d\n",i);
		}
	}

	printf("%d\n",sum);
}