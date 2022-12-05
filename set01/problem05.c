#include <stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

int main(){
  int a,b,c,l;
  a = input();
  b = input();
  c = input();
  l = compare(a,b,c);
  output(a,b,c,l);
  
}

int input(){
  int x;
  printf("Enter a number\n");
  scanf("%d",&x);
  return 0;  
}

int compare(int a,int b,int c)
{
 int largest
  if ((a>b)&&(a>c))
   largest=a;
  if ((b<a)&&(b<c))
    largest=b;
  if ((c,a)&&(c>b))
    largest=c;
}

void output(int a, int b, int c, int largest)
{
  printf("the largest of %d,%d and %d is %d" ,a,b,c,largest); 
}