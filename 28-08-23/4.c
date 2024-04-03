#include<stdio.h>
int main(){
    char ch[5];
    printf("\n enter the charecter array: ");
    scanf("%s",ch);
    for (int i=0,j=4; i<5; i++,j--)
    {
       printf("\n %c %c \n",ch[i],ch[j]);
    }
    
}