#include<stdio.h>
int main(){
    char ch;
    do{
    int n;
    printf("\n Enter number of row you want to print: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",i+1);
        }
        printf("\n");
    }
    printf("\ndo you want to repeat? (y/n):");
    scanf("%s",&ch);
    }while(ch=='y');
    return 0;
}