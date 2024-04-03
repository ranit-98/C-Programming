#include <stdio.h>
#include <string.h>

// struct with typedef person
 struct Person{
  char name[50];
  int citNo;
  float salary;
};

int main(){

  // create  Person variable
  struct Person p1;
  struct Person p2;
  strcpy(p1.name, "George Orwell");

  // assign values to other p1 variables
  p1.citNo = 1984;
  p1.salary = 2500;
  strcpy(p2.name, "G Orwell");

  // assign values to other p1 variables
  p2.citNo = 1974;
  p2.salary = 3000;

  // print struct variables
  printf("Name: %s\n", p1.name);
  printf("Citizenship No.: %d\n", p1.citNo);
  printf("Salary: %.2f\n", p1.salary);

  printf("Name: %s\n", p2.name);
  printf("Citizenship No.: %d\n", p2.citNo);
  printf("Salary: %.2f", p2.salary);
  return 0;
}