// armstrong no. in range


#include<stdio.h>
#include<math.h>
int main(){
    char ch;

    do{
    int a,b;

    printf("enter start number: ");
    scanf("%d",&a);
    printf("enter end number: ");
    scanf("%d",&b);

    for(int i=a;i<=b;i++){
            int r,c,d=0,sum=0,rem;
            r=i;
        while(r!=0){
            r=r/10;
            d++;
        }
        r=i;
        while(r>0){
            rem=r%10;
            sum=sum+pow(rem,d);
            r=r/10;
        }
        if(sum==i)
            printf("\n%d is an armstrong no.",i);
    }
    printf("\ndo you want to repeat? (y/n):");
    scanf("%s",&ch);
    }while(ch=='y');

}