#include <stdio.h>
#include <math.h>

  float areaofcircle(float r)
{
  float area = 3.14 * r * r;
  return area; 
}

  float radiusminimum()
{
    float radiusmin;
    char input [256];
    int correct = 0;

  while (correct == 0)
    {
    printf("What is the minimum radius of the circle? \n");
    fgets(input, 256, stdin);
    correct = sscanf(input, "%f", &radiusmin);
    }
   
  if (correct != 1)
    {
    printf("Enter a number\n");
    }
  return radiusmin;
}

float radiusmaximum()
{
    float radiusmax;
    char input2 [256];
    int correct2 = 0;

  while (correct2 == 0)
    {
    printf("What is the maximum radius of the circle? \n");
    fgets(input2, 256, stdin);
    correct2 =  sscanf(input2, "%f", &radiusmax);
    }
   
  if (correct2 != 1)
    {
    printf("Enter a number\n"); 
    }
  return radiusmax;
}

 int main()
{
  float rmin = radiusminimum();
  float rmax = radiusmaximum();
  
  if (rmax <= rmin)
{
  printf("The value of the minimum radius must be less than the value of the maximum radius.\n");
  printf("What is the minimum radius of the circle?\n");
  scanf("%f", &rmax);
}

  for (float i = rmin; i <=rmax; i++)
  {
    float a = areaofcircle(i);
    printf("area = %f\n", a); 
  }

}
