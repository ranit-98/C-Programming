#include<stdio.h>
int main(){
    int num[5];
    
    for(int i=0;i<5;i++){
        printf("\n enter the value for %dth position in num: ",i);
        scanf("%d",&num[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        printf("\t %d",num[i]);
    }
    
}