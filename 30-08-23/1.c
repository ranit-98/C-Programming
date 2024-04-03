#include<stdio.h>
int main(){
    char ch;
    do{
    int n;
    printf("\n enter number of row you want: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("1 ");
        }
        printf("\n");
    }
    printf("\ndo you want to repeat? (y/n):");
    scanf("%s",&ch);
    }while(ch=='y');
    return 0;
}