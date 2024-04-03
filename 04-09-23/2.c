//structure user input


#include <stdio.h>


  // creating a student structure template
  struct student {
    char firstname[64];
    char lastname[64];
    char id[64];
    int score;
  };
  int main() {
  // creating a student structure variable
  struct student std1;

  // taking user input
  printf("Enter First Name: ");
  scanf("%s", std1.firstname);

  printf("Enter Last Name: ");
  scanf("%s", std1.lastname);

  printf("Enter ID: ");
  scanf("%s", std1.id);

  printf("Enter Score: ");
  scanf("%d", &std1.score);
 // struct student std1;

  // taking user input
  struct student std2;
  
  printf("Enter First Name: ");
  scanf("%s", std2.firstname);

  printf("Enter Last Name: ");
  scanf("%s", std2.lastname);

  printf("Enter ID: ");
  scanf("%s", std2.id);

  printf("Enter Score: ");
  scanf("%d", &std2.score);

  // output
  printf("\nStudent Detail:\n");
  printf("Firstname: %s %s\n", std1.firstname,std1.lastname);
  //printf("Lastname: %s\n", std1.lastname);
  printf("ID: %s\n", std1.id);
  printf("Score: %d\n", std1.score);

  // output
  printf("\nStudent Detail:\n");
  printf("Firstname: %s %s\n", std2.firstname,std2.lastname);
  //printf("Lastname: %s\n", std2.lastname);
  printf("ID: %s\n", std2.id);
  printf("Score: %d\n", std2.score);


  return 0;
}
