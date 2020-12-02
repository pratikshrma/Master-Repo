#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr1[n][n];
    int arr2[n][n];
    int arr4[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr4[i][j]);
        }
    }
    int arr3[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j]+arr4[i][j];
        }
    }for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}