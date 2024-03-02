#include<stdio.h>
int input();
int compare(int a, int b, int c, int largest);
void output(int a, int b, int c, int largest);
int main()
{
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  largest=compare(a,b,c,largest);
  output(a,b,c,largest);
  return 0;
}
int input()
{
    int x;
    printf("Enter the values:\n");
    scanf("%d",&x);
    return x;
}

int compare(int a, int b, int c,int largest)
{
    if (a > b && a > c) 
    {
        return a;
    } 
     if ( b > c) 
     {
        return b;
     } 
     else 
     {
        return c;
     }
}
void output(int a, int b, int c, int largest)
{
    printf("The largest number between %d,%d and %d is %d\n",a,b,c,largest);
}
