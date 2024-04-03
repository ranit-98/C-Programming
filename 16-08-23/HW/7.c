#include<stdio.h>
int main(){
    char first_name[50],last_name[50];
    float distance,ticket_charges,sur_charge,no_of_ticket, total;
    printf("\n Enter customer name: ");
    scanf("%s %s",first_name,last_name);
    printf("\n Enter no of tickets: ");
    scanf("%f",&no_of_ticket);
    printf("\n Enter distance in km: ");
    scanf("%f",&distance);


    if(distance<20){
            ticket_charges=distance*50;
            sur_charge=ticket_charges*0.6;
    }else if(distance<50){
            ticket_charges=(distance-20)*70 + 1000;
            sur_charge=(ticket_charges-1000)*0.8 + 12 + 4;
    }else if (distance<100){
            ticket_charges=(distance-50)*80 + 1000 + 3500;
            sur_charge=(ticket_charges-4500)*0.9 + 12+ 40;
    }else if(distance<250){
            ticket_charges=(distance-100)*100+1000+3500+12000;
            sur_charge=(ticket_charges-4500-12000)*1.2 + 12 + 40 + 135;
    }else{
            ticket_charges=(distance-250)*120+1000+3500+12000+15000;
            sur_charge = (ticket_charges-4500-12000-15000)*1.5 + 12 + 40 + 135 + 1800;
    }
    
    total=(no_of_ticket*ticket_charges)*sur_charge;


    printf("\n no of ticktes: %g",no_of_ticket);
    printf("\n Total distance: %g",distance);
    printf("\n Ticket Charges: %g",ticket_charges);
    printf("\n Sur Charges: %g",sur_charge);
    printf("\n Total Charges: %0.2f",total);


}