//WAP to find out the user given value is a number or charecter.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    char input[100] = "";
    int length,i; 
    printf("\n Enter the input: ");
    scanf ("%s", input);
    length = strlen (input);
    for (i=0;i<length; i++)
        if (!isdigit(input[i]))
        {
            printf ("Entered input is not a number\n");
            exit(1);
        }
    printf ("Given input is a number\n");
}