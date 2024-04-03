//11-08-2023--1--take input from user and print full name
#include<stdio.h>
int main(){
    char first_name[50],last_name[50];
    printf("\n Enter your first name: ");
    scanf("%s",first_name);
    printf("\n Enter your last name: ");
    scanf("%s",last_name);
    printf("\n Thank you %s %s",first_name,last_name);
    return 0;
    
}