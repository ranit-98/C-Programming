#include<stdio.h>
int main(){
    int i,j;
    i=0;
    do{
        printf("\t %d",i);
        i++;
    }while (i<=10);
    j=10;
    printf("\n Reverse \n");
     do{
        printf("\t %d",j);
        j--;
    }while (j>=0);
    return 0;
}