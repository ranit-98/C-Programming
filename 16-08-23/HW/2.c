#include<stdio.h>
int main(){
    char input;
    printf("\n Enter the input Charecter: ");
    scanf("%c",&input);
    if(input>='a' && input<='z' || input>='A' && input<='Z')
        printf("\n %c is a Alphabet",input);
    else if(input>='0'&& input<='9')
        printf("\n %c is a Number ",input);
    else 
        printf("%c is a special Charecter",input);

 return 0;
}