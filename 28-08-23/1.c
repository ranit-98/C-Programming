#include<stdio.h>
int main(){
    int num[5]={14,15,17,20,22};
    char ch[5]={'A','B','c','D','E'};
    for(int i=0;i<5;i++){
        printf("\t %d",num[i]);
    }
    printf("\n");
    for(int j=0;j<5;j++){
        printf("\t%c",ch[j]);
    }
}