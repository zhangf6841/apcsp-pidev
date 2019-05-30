#include <stdio.h>
#include "student.h"

void printStudent(struct Student * student)
{
  printf("firstname:%s\n", student->firstname);
  printf("lastname:%s\n", student->lastname);
  printf("age:%d\n", student->age);
  printf("studentid:%d/n", student->studentid);
}

