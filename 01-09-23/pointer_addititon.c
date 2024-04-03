//function pointer

#include<stdio.h>
int addition ();
int substraction();
int multiplication();
int division();
int main ()
{
    int result;
    int (*ptr)();
    ptr = &addition;
    result = (*ptr)();
    printf("The sum is %d",result);
    ptr = &substraction;
    result = (*ptr)();
    printf("The subtraction is %d",result);
    ptr = &multiplication;
    result = (*ptr)();
    printf("The multiplication is %d",result);
    ptr = &division;
    result = (*ptr)();
    printf("The division is %d",result);
}
int addition()
{
    int a, b;
    printf("\nEnter two numbers?");
    scanf("%d %d",&a,&b);
    return a+b;
}
int substraction()
{
    int a, b;
    printf("\nEnter two numbers?");
    scanf("%d %d",&a,&b);
    if(a>b)
        return a-b;
    else return b-a;
}
int multiplication()
{
    int a, b;
    printf("\nEnter two numbers?");
    scanf("%d %d",&a,&b);
    return a*b;
}
int division()
{
    int a, b;
    printf("\nEnter two numbers?");
    scanf("%d %d",&a,&b);
    return a/b;
}