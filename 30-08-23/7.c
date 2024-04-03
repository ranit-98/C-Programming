#include<stdio.h>
int main(){
    int num;
    printf("\n Enter the number of row you want to print: ");
    scanf("%d",&num);
    int n=1;
    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            printf(" %d ",n-1);
            n=n+1;
        }
        printf("\n");
    }
    return 0;
}