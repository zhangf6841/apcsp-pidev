#include <stdio.h>
#include <string.h>

struct Student {
  char firstname [100];
  char lastname [100];
  int age;
  int studentid;

};

void printStudent (struct Student * student);

