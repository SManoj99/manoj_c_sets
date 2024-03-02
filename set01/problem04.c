#include<stdio.h>
void input(int *a, int *b);
void add(int a, int b, int *sum);
void output(int a, int b, int sum);
int main()
{
   int a,b,sum=0;
   input(&a,&b);
   add(a,b,&sum);
   output(a,b,sum);
   return 0;
}
void input(int *a, int *b)
{
    printf("Enter the values of a nd b:\n");
    scanf("%d %d",a,b);
}
void add(int a, int b, int *sum)
{
    *sum=a+b;
}
void output(int a, int b, int sum)
{
    printf("The sum of %d and %d is %d\n",a,b,sum);
}