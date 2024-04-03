#include<stdio.h>
int main(){
    char ch;
    int n1,n2;
    printf("\n Enter the operator among +,-,*,and / : ");
    scanf("%c",&ch);
    printf("\n Enter 2 number using a space between them(1st number must be greater than 2nd): ");
    scanf("%d %d",&n1,&n2);
    switch (ch) 
    {
    case '+': printf("\n %d + %d = %d",n1,n2,n1+n2);
        break;
    case '-':printf("\n %d - %d = %d",n1,n2,n1-n2);
        break;
    case '*':printf("\n %d * %d = %d",n1,n2,n1*n2);
        break;
    case '/': printf("\n %d / %d = %d",n1,n2,n1/n2);
        break;
    default: printf("\n not a valid input :)");
    
    }
    return 0;
}