#include<stdio.h>
int main(){
    int n1,n2,n3,largest;
    printf("\n Enter 3 no: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    switch ((n1>n2 && n1>n3)?1:(n2>n1 && n2>n3)?2:3)
    {
    case 1: largest=n1;
        break;
    case 2: largest=n2;
        break;
    case 3: largest=n3;
        break;
    }
     printf("\n %d is the greatest among %d %d and %d",largest,n1,n2,n3);
     return 0;
}