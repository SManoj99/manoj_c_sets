#include <stdio.h>

int main  ()
{
  int a,b,sum;
  printf("enter the number:");
  scanf("%d",&a);
  printf("enter the number:");
  scanf("%d",&b);
  sum=a+b;
  printf("%d+%d=%d",a,b,sum);
  return sum;
}