//11-08-2023--4--Travel cost

#include<stdio.h>
int main(){
    char first_name[50],last_name[50];
    float distance,cost_of_petrol,total,driver_cost;
    printf("Enter your first name: ");
    scanf("%s",& first_name);
    printf("Enter your last name: ");
    scanf("%s",& last_name);
    printf("\n Enter distance in km: ");
    scanf("%f",&distance);
    printf("Enter cost of petrol per litre: ");
    scanf("%f",&cost_of_petrol);
    printf("Thank you %s %s",first_name,last_name);
    total=distance*cost_of_petrol;
    printf("\n total charges: %g",total);
    driver_cost=2*distance;
    printf("\n Driver Charge: %.2f",driver_cost);
    printf("\n Net Charges: %g",total+driver_cost);
    return 0;


}