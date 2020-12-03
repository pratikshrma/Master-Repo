#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int arr1[a][b];
    int arr2[b][c];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    int arr3[a][c];
    for(int i=0;i<a;i++){
        for(int j=0;j<c;j++){
            arr3[i][j]=0;
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<c;j++){
            for(int k=0;k<b;k++){
                arr3[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}