#include <stdio.h>
#include<math.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
int main()
{
    float n,sqrroot;
    n=input();
    sqrroot=square_root(n);
    output(n,sqrroot);
    return 0;
}
float input()
{
    float n;
    printf("Enter the number:\n");
    scanf("%f",&n);
    return n;
}
float square_root(float n)
{
    float x0 = n / 2.0;
    for (int i = 0; i < n; i++) 
    {
        x0 = 0.5 * (x0 + n / x0);
        printf("%f\n",x0);
    }

    return x0;
}
void output(float n, float sqrroot)
{
    printf("The square root of %f is %f\n",n,sqrroot);
}