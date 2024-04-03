#include<stdio.h>
int main(){
    int n1,n2;
    printf("\n Enter 2 number using a space between them:  ");
    scanf("%d %d",&n1,&n2);
    switch (n1>n2)
    {
    case 1: printf("\n %d is greater than %d",n1,n2);
        break;
    case 0: printf("\n %d is greater than %d",n2,n1);
        break;
    default:
        break;
    }
}