#include<stdio.h>
int main(){
    char ch;
    do{
    int num,count=0,rem,cnt,mul=1,result=0;
    printf("\n Enter the number: ");
    scanf("%d",&num);  //371
    int N=num;
    while (N!=0)
    {           
        N=N/10;   
        count++;  
    }
    cnt=count;  
    N=num;      
    while (N!=0)
    {
        rem=N%10;   
        while (cnt !=0)
        {
            mul=mul*rem;   
            cnt--;          
        }
        result=result+mul;  
        cnt=count;          
        N=N/10;             
        mul=1;
    }
    if(result==num)
        printf("\n %d is a Armstrong number :)",num);
    else    
        printf("\n %d is not a Armstrong number :(",num);

    
    printf("\ndo you want to repeat? (y/n):");
    scanf("%s",&ch);
    }while(ch=='y');
    return 0;
}