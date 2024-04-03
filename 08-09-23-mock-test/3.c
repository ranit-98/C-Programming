// prime in range


#include<stdio.h>
int main(){
    int start,end;
    printf("enter first number: ");
    scanf("%d",&start);
    printf("enter second number: ");
    scanf("%d",&end);
    for(int i=start;i<=end;i++)
    {
        int c=0;
        if(i==0 || i==1){
             printf("\n%d is is not a prime no.\n",i);
             printf("\n Prime numbers with in the range %d to %d are: ",start,end);
            continue;
        }else    
            for(int j=2;j<i;j++){
                if(i%j==0){
                 c++;
                 break;
                }
            }
            if (c==0){
                    printf("\t%d",i);
            }
    }
    return 0;
}