#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("\n Enter 3 number using space among them: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    switch((n1>n2) && (n1>n3))
    {
    case 1: printf("\n %d is the greatest among %d %d and %d",n1,n1,n2,n3);
        break;
    case 0: switch (n2>n3)
    {
    case 1: printf("\n %d is the greatest among %d %d and %d",n2,n1,n2,n3);
        break;
    case 0: printf("\n %d is the greatest among %d %d and %d",n3,n1,n2,n3);
        break;   
    }
    
    }
    return 0;

}