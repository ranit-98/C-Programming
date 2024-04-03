#include<stdio.h>
int main(){
    int i;
    for ( i = 0; i <=10; i++)
    {
        printf("\t %d",i);
    }
    printf("\n Reverse \n   ");
    for(int j=10;j>=0;j--){
         printf("\t %d",j);
    }
    return 0;
}