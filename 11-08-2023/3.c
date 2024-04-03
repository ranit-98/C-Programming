//11-08-2023--3--Electricity Bill

#include<stdio.h>
int main(){
    char first_name[50],last_name[50];
    float unit,total;
    printf("Enter the first name: ");
    scanf("%s",&first_name);
    printf("\n Enter the last name: ");
    scanf("%s",&last_name);
    printf("\n Enter the number of unit electricity you used: ");
    scanf("%f",&unit);
    total=unit*5.5;
    printf("%s %s your electricity bill is: %g",first_name,last_name,total);
    printf("\n Rebate is: %g",total*0.015);
    printf("\n your net bill is: %g",total-(total*0.015));
    return 0;

}