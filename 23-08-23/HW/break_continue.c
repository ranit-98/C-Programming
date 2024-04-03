#include<stdio.h>
int main(){
    for(int i=0;i<=10;i++){
        if(i==7){
            break;
        }
        printf("\t%d",i);
    }

    printf("\n-----------------------------------\n");

    for (int j = 0; j <= 10; j++)
    {
        if(j==7){
            continue;
        }
        printf("\t%d",j);
    }
    
}