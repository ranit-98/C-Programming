//16-08-23----3----comparision among 3 no
#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("\n Enter 1st number: ");
    scanf("%d",&n1);
    printf("\n Enter 2nd number: ");
    scanf("%d",&n2);
    printf("\n Enter 3rd number: ");
    scanf("%d",&n3);
    if(n1>n2)
        printf("\n %d is greater :)",n1);
    else if (n2>n3)
        printf("\n %d is greater :)",n2);
    else
        printf("\n %d is greater :)",n3);
    return 0;
}