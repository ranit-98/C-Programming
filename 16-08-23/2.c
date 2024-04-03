//16-08-23----2---compare two no and print which is grater
#include<stdio.h>
int main(){
    int n1,n2;
    printf("\n Enter 1st number: ");
    scanf("%d",&n1);
    printf("\n Enter 2nd number: ");
    scanf("%d",&n2);
    if(n1>n2)
        printf("\n %d is greater than %d",n1,n2);
    else
        printf("\n %d is greater than %d",n2,n1);

    return 0;

}