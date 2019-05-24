#include <stdio.h>

  float area(int a)

{

  return (3.14*a*a);

}

  int main()

{
  int a;
  float b;
  b = area(a);

  for(a = 3.5; a < 12.5; a = a + 1)

{
  float e;
  e = area(a);
 
  printf("area = %f\n", e);
}

return 0;

}
