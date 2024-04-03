#include<stdio.h>
int main(){
    char first_name[50],last_name[50];
    float cost_of_petrol,distance,discount,total_cost;
    printf("Enter your first name: ");
    scanf("%s",first_name);
    printf("\n Enter your last name: ");
    scanf("%s",last_name);
    printf("\n Enter cost of petrol per litre: ");
    scanf("%f",&cost_of_petrol);
    printf("\n Enter distance: ");
    scanf("%f",&distance);
    
    
    total_cost=cost_of_petrol * distance;
    if (total_cost < 500) 
         discount=0.05*total_cost;
    else if(total_cost<5000)
         discount=0.08*total_cost;
    else
        discount=0.10*total_cost;

    float net_charges=total_cost - discount;

    printf("\n Thank you %s %s :)",first_name,last_name);
    printf("\n cost of petrol per litre is: %g",cost_of_petrol);
    printf("\n total distance in km is: %g",distance);
    printf("\n TOtal cost is: %g",total_cost);
    printf("\n Total discount is: %g",discount);
    printf("\n Net charges is: %g",net_charges);
    return 0;
}