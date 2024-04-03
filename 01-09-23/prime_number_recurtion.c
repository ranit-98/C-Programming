#include<stdio.h>
int isprime(int n,int a);
int main(){
    char ch;
    do{
    int n;
    
    printf("\n enter the number: ");
    scanf("%d",&n);
    if(isprime(n,2)==1)
        printf("\n %d is a prime number",n);
    else
        printf("%d is not prime number",n);
   printf("\ndo you want to repeat? (y/n):");
    scanf("%s",&ch);
    }while(ch=='y');
    return 0;
    

}
int isprime(int n,int a){
    if(n==a)
        return 1;
    else if(n%a==0)
        return 0;
    else if(n==1 || n==0)
        return 0;
    else return  isprime(n,a+1);    
     
}