#include<stdio.h>
int main(){
    int num;
    printf("\n Enter a number with in the range of 1 to 3: ");
    scanf("%d",&num);
    switch (num)
    {
    case 1: printf("\n Hello :)");
        break;
    case 2: printf("\n hii :)");
        break;
    case 3: printf("\n bye :)");
        break;
    
    default:    printf("\n Sorry no value  :)");
        
    }
    return 0;
}