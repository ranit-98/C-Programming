#include<stdio.h>
int main(){
    char ch;
    do{
    int num;
    printf("\n Enter the number: ");
    scanf("%d",&num);
    printf("\n Table of %d is: ",num);
    for (int  i = 1; i <=10; i++)
    {
       printf("\n %d * %d  = %d",num,i,num*i);
    }

    printf("\ndo you want to repeat? (y/n):");
    scanf("%s",&ch);
    }while(ch=='y');
    return 0;
}