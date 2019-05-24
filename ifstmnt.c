#include <stdio.h>

int main()
{
  int b = 2;
  int a = 0;

  // if statement to test is a is equal to b
  if (a == b)
  {
    printf("a is equal to b\n");
  }
  else
  {
    printf("a is not equal to b\n");
  }


  if (a != b)
  {
    printf("a is not equal to b\n");
  }
  else
  {
    printf("a is equal to b\n");
  }


  if (a > b)
  {
    printf("a is greater than b\n");
  }
  else
  {
    printf("a is not greater than b\n");
  }


  if (a >= b)
  {
    printf("a is greater than or equal to b\n");
  }
  else
  {
    printf("a is not greater than or equal to b\n");
  }


  if (a == 0 && b == 0)
  {
    printf("a is equal to 0 AND b is equal to 0\n");
  }
  else
  {
    printf("a AND b are not both equal 0\n");
  }


  if (a == 0 || b == 0)
  {
    printf("a is equal to 0 OR b is equal to 0\n");
  }
  else
  {
    printf("neither a OR b are equal to 0\n");
  }


  if (!(a == 0))
  {
    printf("a is NOT equal to 0\n");
  }
  else
  {
    printf("a is equal to 0\n");
  }


}
