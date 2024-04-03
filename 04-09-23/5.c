#include<stdio.h>
#include<string.h>
int main(){
    char first_name[50],last_name[50];
    int i;
    printf("\n enter first name: ");
    scanf("%s",first_name);
    printf("\n eneter the last name: ");
    scanf("%s",last_name);
   // printf("thank you %s %s\n",first_name,last_name);
    //strcat(first_name,last_name);
   // strcpy(last_name,first_name);
   // printf("\t%s",last_name);
    // strncpy(last_name,first_name,4);
    // printf("\n%s",last_name);
    i=strcmp(first_name,last_name);
    printf("%d",i);
    i=strcmpi(first_name,last_name);
     printf("\t%d",i);


}