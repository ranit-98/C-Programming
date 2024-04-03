#include<stdio.h>
int main(){
    int n;
    printf("\n Enter the number of row you want to print: ");
    scanf("%d",&n);
    for(int i=n;i>=0;i--){
        for(int j=0;j<i;j++){
            printf("1 ");
        }
        printf("\n");
    }
}