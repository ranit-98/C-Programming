#include<stdio.h>
#include<string.h>
int main(){
    
  char customer_first_name[50],customer_last_name[50];
  int no_of_items;
  float total_bill,discount,net_bill;
  printf("Enter customer name: ");
  scanf("%s %s",customer_first_name,customer_last_name);
  printf("\n Enter number of item: ");
  scanf("%d", &no_of_items);
  printf("\n Enter total Bill amount: ");
  scanf("%f",&total_bill);
  


        if(no_of_items<10 || total_bill<=500)
             discount=0;
        else if (no_of_items<15 || total_bill<=1000)
             discount=0.05*total_bill;
        else if(no_of_items<20 || total_bill<=2000)
              discount=0.08*total_bill;
        else if(no_of_items<30 || total_bill<=5000)
              discount=0.10*total_bill;
        else
              discount=0.15*total_bill;

    net_bill=total_bill-discount;
 
 
  printf("\n Thank you %s %s :)",customer_first_name,customer_last_name);
  printf("\n No of items is : %d",no_of_items);
  printf("\n Total bill is: %g",total_bill);
  printf("\n Discount is: %g",discount);
  printf("\n Net bill is: %g",net_bill);
  return 0;

 
}