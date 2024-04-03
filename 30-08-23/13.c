#include<stdio.h>
int main(){
    int n;
    printf("\n Enter the number of row you want to print: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
         for(int space=n;space>=i;space--){
             printf(" ");
     }
        for(int j=0;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
}
