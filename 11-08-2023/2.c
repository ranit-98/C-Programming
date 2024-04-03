//11-08-2023--2---take 2 no from user and perform addition,substraction,multiplication,division

#include<stdio.h>
int main(){
    float n,m,large,small;
    printf("Enter num1: ");
    scanf("%f",&n);
    printf("Enter num2: ");
    scanf("%f",&m);
    if (n>m)
    {
        large=n;
        small=m;
    }else{
        large=m;
        small=n;
    }
    printf("\n sum of %g and %g is %g",n,m,large+small);
    printf("\n multiplication of %g and %g is %g",n,m,n*m);
    printf("\n substraction of %g and %g is %g",large,small,large-small);
    printf("\n division of %g and %g is %.2f",large,small,large/small);
    
    
}