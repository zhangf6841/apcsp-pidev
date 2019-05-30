
int main()
{
  char input[100], firstname[100], lastname[100]; 
  int numberofstudents, age, studentid;
  printf("How many students will be stored (max 50)?\n");
  fgets(input, 100, stdin);
  sscanf(input, "%d", &numberofstudents);
  struct Student student[50];
 
  for (int i = 0; i < numberofstudents; i++)
{
  printf("What is your first name?\n");
    fgets(input, 100, stdin);
    sscanf(input, "%s", firstname);
  printf("What is your last name?\n");
    fgets(input, 100, stdin);
    sscanf(input, "%s", lastname);
  printf("How old are you?\n");
    fgets(input, 100, stdin);
    sscanf(input, "%d", &age);
  printf("What is your student ID?\n");
    fgets(input, 100, stdin);
    sscanf(input, "%d", &studentid);
  strcpy(student[i].firstname, firstname);
  strcpy(student[i].lastname, lastname);
  student[i].age = age;
  student[i].studentid = studentid;
}

  for (int i = 0; i < numberofstudents; i++)
{
  printStudent(&student[i]);
}
}

