//recusion prime

#include <stdio.h>

int primeno(int, int);

int main()
{
    int num, check;
    printf("Enter a number: ");
    scanf("%d", &num);
    check = primeno(num, num / 2);
    if (check == 1)
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime number\n", num);
    return 0;
}

int primeno(int num, int i)
{
    if(num==0 || num==1)
        return 0;
    else{
    if (i == 1)
        return 1;
    else
    {
       if (num % i == 0)
         return 0;
       else
         return primeno(num, i - 1);
    }
    }
}