#include<stdio.h>
int main(){
    char first_name[50],last_name[50];
    int customer_id,unit_of_electricity;
    float sur_charge,total_cost;

    printf("\n Enter Customer name: ");
    scanf("%s %s",first_name,last_name);
    printf("\n Enter customer id: ");
    scanf("%d",&customer_id);
    printf("\n Unit of electricity used: ");
    scanf("%d",&unit_of_electricity);

    if(unit_of_electricity<=100){
             total_cost=0.50*unit_of_electricity;
             sur_charge=0;
    }else if(unit_of_electricity>100 && unit_of_electricity<=200){
            total_cost=0.65*(unit_of_electricity-100)+50;
            sur_charge=(total_cost-100)*0.0010;
    }else if(unit_of_electricity>200 && unit_of_electricity<=500){
            total_cost=0.75*(unit_of_electricity-200)+50+65;
            sur_charge=(total_cost-200)*0.0020;
    }else if(unit_of_electricity>500 && unit_of_electricity<=1000){
             total_cost=1*(unit_of_electricity-500)+50+75+225;
             sur_charge=(total_cost-500)*0.0030;
    }else{
            total_cost=1.2*(unit_of_electricity-1000)+50+75+225+500;
            sur_charge=(total_cost-1000)*0.0050;
    }
        
        total_cost=total_cost+sur_charge;
    printf("\n Thank you %s %s :)",first_name,last_name);
    printf("\n customer id is: %d",customer_id);
    printf("\n unit of electricity used: %d",unit_of_electricity);
    printf("\n amount to be paid is %g",total_cost);
    printf("\n Bank details is :)");

}