/*
1 2   
3 4
5 6
(3*2)
1 2 3
4 5 6
(2*3)

*/

#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int arr1[a][b];
    int arr2[b][c];
    printf("Array one \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Array Two \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("Ans:- \n");
    int ans[a][c];
    for(int i=0;i<a;i++){
        for(int j=0;j<c;j++){
            ans[i][j]=0;
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<c;j++){
            for(int k=0;k<b;k++){
                ans[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<c;j++){
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
}