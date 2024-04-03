
#include <stdio.h>
#include<string.h>
int main() {
    float eng, beng, his, geo, bio;
    float total, average, percentage;
    char grade[50],first_name[50],last_name[50];

    printf("Enter your first name: ");
    scanf("%s",first_name);
    printf("\n Enter your last name: ");
    scanf("%s",last_name);
    printf("\n Enter %s %s's Bengali Marks: ",first_name,last_name);
    scanf("%f",&beng);
    printf("\n Enter %s %s's English Marks: ",first_name,last_name);
    scanf("%f",&eng);
    printf("\n Enter %s %s's History Marks: ",first_name,last_name);
    scanf("%f",&his);
    printf("\n Enter %s %s's Geography Marks: ",first_name,last_name);
    scanf("%f",&geo);
    printf("\n Enter %s %s's Biology Marks: ",first_name,last_name);
    scanf("%f",&bio);

   //  printf("Enter the marks of five subjects::\n");
   //  scanf("%f%f%f%f%f", &eng, &beng, &his, &geo, &bio);

    
    total = eng + beng + his + geo + bio;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    
    if (average >= 90)
        strcpy(grade,"A+");
    else if (average >= 80 && average < 90)
       strcpy(grade,"A");
    else if (average >= 60 && average < 80)
       strcpy(grade,"B");
    else if (average >= 40 && average < 60)
      strcpy(grade,"C");
    else
       strcpy(grade,"D");

   
    printf("\n score card of %s %s",first_name,last_name);
    printf("\nThe Total marks is:  \t%g / 500.00\n", total);
    printf("\nThe Average marks is:\t%g\n", average);
    printf("\nThe Grade is:        \t'%s'\n", grade);
    return 0;
}