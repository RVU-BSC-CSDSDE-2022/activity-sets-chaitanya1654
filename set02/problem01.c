#include<stdio.h>
int input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

int main()
{
  float base,height,area;
  base = input();
  height = input();
  find_area(base,height,&area);
  output(base,height,area);
}

int input();
{
int b;
  printf("enter a number\n");
  scanf("%d", &b);
  return(b);
  int h;
  printf("enter a number\n");
  scanf("%d", &h);
  return(h);
}

void find_area(float base , float height, float *area);
{
  *area = (base*height) / 2 ;
}

void output(float base, float height, float area);
{
  printf("\n\n Area of Triangle is: %f",area);
  return (0);
}
