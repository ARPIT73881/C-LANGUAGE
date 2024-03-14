// Program to calculate the area of circle and modify the same program to calculate the volume of cylinder
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int radius;
  float pi = 3.14;
  printf("Enter the radius of circle = ");
  scanf("%d", &radius);
  printf("The area of the circle = %0.2f", pi * radius * radius);
  return 0;
}