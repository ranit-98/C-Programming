//16-08-23----5------comparision among 3 nos using nested if 
#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("\n Enter 1st number: ");
    scanf("%d",&n1);
    printf("\n Enter 2nd number: ");
    scanf("%d",&n2);
    printf("\n Enter 3rd number: ");
    scanf("%d",&n3);
    if(n1>n2){
        if(n1>n3)
            printf("\n %d is the greatest among %d %d and %d ",n1,n1,n2,n3);
    } else if(n2>n3){
        if(n2>n1)
            printf("\n %d is the greatest  among %d %d and %d",n2,n1,n2,n3);    
    }else
        printf("\n %d is the greatest  among %d %d and %d",n3,n1,n2,n3);
    
    return 0;
}