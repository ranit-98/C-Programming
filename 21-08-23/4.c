#include<stdio.h>
int main(){
    int n1,n2,n3,max;
    printf("\n Enter 3 number using space among them: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    max=(n1>n2)? n1:n2;
    switch(max>n3)
    {
    case 1: printf("\n %d is the greatest among %d %d and %d",max,n1,n2,n3);
        break;
    case 0: printf("\n %d is the greatest among %d %d and %d",n3,n1,n2,n3);
        break;
    
    }
    return 0;

}