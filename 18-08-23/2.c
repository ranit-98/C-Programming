#include<stdio.h>
int main(){
    float cost_of_petrol,milage,total_distance,sur_charge,total_charges;
    printf("\n Enter the cost of petrol: ");
    scanf("%f",&cost_of_petrol);
    printf("\n Enter the milage of your car: ");
    scanf("%f",&milage);
    printf("\n Enter the distance: ");
    scanf("%f",&total_distance);

    total_charges=cost_of_petrol*total_distance;
    if(total_distance<30)
            sur_charge=0;
    else if(total_distance>30 && total_distance<60)
            sur_charge=(total_distance-30)*0.10;
    else if(total_distance>60 && total_distance<100)
            sur_charge=(total_distance-60)*0.20;
    else if(total_distance>100 && total_distance<150)
            sur_charge=(total_distance-100)*0.30;
    
    else 
            sur_charge=(total_distance-150)*0.50;
    
    total_charges=total_charges+sur_charge;

    printf("\n cost of petrol is: %g",cost_of_petrol);
    printf("\n milage of car is : %g /litre",milage);
    printf("\n total distance is: %g",total_distance);
    printf("\n total cost to customer: %g",total_charges);
    printf("\n total cost milage wise: %g",total_charges/milage);

    return 0;


}