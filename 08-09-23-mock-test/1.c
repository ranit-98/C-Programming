#include<stdio.h>
#include<string.h>
int main(){
    char first_name[50],last_name[50],grade[15];
    int eng,ben,math,hindi,history,total;
    float avg;
    printf("\n enter your name: ");
    scanf("%s %s",first_name,last_name);
    printf("\n enter your marks in five subjects seperated by space ");
    scanf("%d %d %d %d %d",&eng,&ben,&math,&hindi,&history);

    total=eng+ben+math+hindi+history;
    avg=total/5;

   if(avg>=90)
        strcpy(grade,"A+");
    else if(avg>=80)
        strcpy(grade,"A");
    else if(avg>=60)
        strcpy(grade,"B+");
    else if(avg>=50)
        strcpy(grade,"B");
    else if(avg>=40)
        strcpy(grade,"C");
    else if(avg>=30)
        strcpy(grade,"D");
    else strcpy(grade,"F");
    printf("\n %s %s your total marks is: %d ",first_name,last_name,total);
    printf("\n %s %s your avg marks is: %g ",first_name,last_name,avg);
    printf("\n %s %s your grade is %s",first_name,last_name,grade);
    return 0;
}