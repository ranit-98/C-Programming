#include<stdio.h>
int main(){
  char ch;
  do{
    int num,flag=0;
    printf("\n Enter the number: ");
    scanf("%d",&num);
   for (int i = 2; i <num; i++)
     if(num%i==0){
        flag++;
        break;
     }
   
   if(flag==0)
    printf("\n %d is a prime number ",num);
   else
        printf("%d is not a prime no",num);
    
    printf("\ndo you want to repeat? (y/n):");
    scanf("%s",&ch);
    }while(ch=='y');
    return 0;
}