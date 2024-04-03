#include<stdio.h>
int main(){
    char ch;
    do{
    int n,i,fact=1;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("factorial of the number %d is: %d",n,fact);
    printf("\ndo you want to repeat? (y/n):");
    scanf("%s",&ch);
    }while(ch=='y');
    return 0;
}