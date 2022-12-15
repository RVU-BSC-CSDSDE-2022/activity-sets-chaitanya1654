#include<stdio.h>
void input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

void main()
{
  float base,height;
  base = printf("Enter Base: ");
  scanf("%f",&base);
  height = printf("Enter Height: ");
  scanf("%f",&height);
}

void find_area(float base , float height, float *area);
{
  float *area = (base * height) / 2;
  return(0);
}

void output(float base, float height, float area);
{
  printf("The area of the traingle with base %f and height %f is %0.2f" base,height,area);
  return(0);
}