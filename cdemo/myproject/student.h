#include <stdio.h>
#include <string.h>

struct Student {
  char firstname [100];
  char lastname [100];
  int age;
  int studentid;

};

void printStudent (struct Student * student)
{
  printf("Here is the information for student %s %s.\n", student->firstname, stu$
  printf("Age: %d\n", student->age);
  printf("Student ID: %d\n", student->studentid);
}

