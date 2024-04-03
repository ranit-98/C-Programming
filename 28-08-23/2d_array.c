#include<stdio.h>
int main(){
    int arr[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("\n enter %d(%d)th value: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for(int j=0;j<2;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    
}