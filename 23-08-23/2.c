#include<stdio.h>
int main(){
    int i,j;
    i=0;
    while (i<=10)
    {
        printf("\t %d",i);
        i++;
    }
    printf("\n Reverse \n");
    j=10;
     while (j>=0)
    {
        printf("\t %d",j);
        j--;
    }
    return 0;
}