//11-08-2023--5--Tickets

#include<stdio.h>
int main(){
    char first_name[50],last_name[50];
    float ticket_cost,total,tax,tcs,net_ch,no_of_tickets;
    
    printf("Enter first Name: ");
    scanf("%s",&first_name);
    printf("\n Enter Last Name: ");
    scanf("%s",&last_name);
    printf("\n Enter no of tickets: ");
    scanf("%f",&no_of_tickets);
    printf("\n Enter ticket cost per person: ");
    scanf("%f",&ticket_cost);
    total=ticket_cost*no_of_tickets;
    tax=0.015*total;
    tcs=0.05*total;
    net_ch=total-(tax+tcs);
    printf("\n Thank you %s %s",first_name,last_name);
    printf("\n ticket cost: %g",ticket_cost);
    printf("\n no of tickets is: %g",no_of_tickets);
    printf("\n total cost is: %.2f",total);
    printf("\n Tax is: %g",tax);
    printf("\n Tcs is: %g",tcs);
    printf("\n Net charges: %g",net_ch);
    return 0;
}