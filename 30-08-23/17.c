#include<stdio.h>
int main(){
    int  n;
    printf("\n Enter the number of row you want to print: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int space=i;space<=n;space++){
            printf(" ");
        }
    for(int j=1;j<=2*i-1;j++){   
        if(j==1  ||j==2*i-1){
             printf("*");}
        else
            printf(" ");
    }
    printf("\n");
    }
    for(int i=n-1;i>0;i--){
        for(int space=i;space<=n;space++){
            printf(" ");
        }
    for(int j=1;j<=2*i-1;j++){   
        if(j==1||j==2*i-1){
             printf("*");}
        else
            printf(" ");
    }
    printf("\n");
    }
}