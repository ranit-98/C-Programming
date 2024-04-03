#include<stdio.h>
int main(){
    char ch;
    do{
    int num,N,rem=0,sum=0;
    printf("\n Enter the number: ");
    scanf("%d",&num);
    N=num;
    while (N>0)
    {
        rem=N%10;
        sum=(sum*10)+rem;
        N=N/10;
    }
    if(num==sum)
        printf("\n The number %d is a palindrome number :)",num);
    else
        printf("\n The number %d is not a palindrome number :(",num);

    
    printf("\ndo you want to repeat? (y/n):");
    scanf("%s",&ch);
    }while(ch=='y');
    return 0;

}