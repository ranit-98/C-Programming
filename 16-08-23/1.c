//16-08-23----1----check if the no is greater than 50 or not
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if (n>50)
        printf("\n The number is greater than 50 :) \n");
    else
        printf("\n The number is less than 50 :) \n");
    return 0;
}