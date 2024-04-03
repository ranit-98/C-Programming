#include<stdio.h>
int main(){
    int n;
    printf("\n Enter the number of row you want to print: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
         for(int space=1;space<=i;space++){
             printf(" ");
     }
        for(int j=1;j<=n;j++){
            if(j==n ||j==1 || i==1 ||i==n)
                 printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
