#include <stdio.h>
int input()
{
    int x;
    printf("enter the number:");
    scanf("%d",&x);
    return x;
}
int compute(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;    
}
void output(int sum)
{
     printf("sum is %d",sum);
}
int main()
{
    int a,b,sum;
    a=input();
    b=input();
    sum=compute(a,b);
    output(sum);
}