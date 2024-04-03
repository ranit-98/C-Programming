#include<stdio.h>
int main(){
    char ch[5];
    
    printf("\n enter the charecter array: ");
    scanf("%s",ch);
    printf("\n");
    for(int i=0;i<5;i++){
        printf("\t %c",ch[i]);
    }
    printf("\n Reverse array: \n");
    for(int j=4;j>=0;j--){
        printf("\t %c",ch[j]);
    }
    
}