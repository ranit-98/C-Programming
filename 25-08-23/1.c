// armstrong no. in range


#include<stdio.h>
#include<math.h>
int main(){
    
    int start,end;

    printf("enter start number: ");
    scanf("%d",&start);
    printf("enter end number: ");
    scanf("%d",&end);
    printf("\n Armstrong number within the range %d to %d is: ",start,end);
    for(int i=start;i<=end;i++){
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
            printf("%d\t",i);
    }
   
    
}