#include <stdio.h>
struct complex_numbers 
{
    float real;
    float img;
};
typedef struct complex_numbers Complex;

Complex input();
Complex find_sum(Complex c1, Complex c2);
void output(Complex c1, Complex c2, Complex sum);

int main ()
{
    Complex c1,c2,sum;
    c1=input();
    c2=input();
    sum=find_sum(c1,c2);
    output(c1,c2,sum);
    return 0;
}
Complex input()
{
    Complex c;
    printf("Enter the real part\n");
    scanf("%f", &c.real);
    printf("Enter the img part\n");
    scanf("%f", &c.img);
    return c;
}
Complex find_sum(Complex c1, Complex c2)
{
    Complex sum;
    sum.real=c1.real+c2.real;
    sum.img=c1.img+c2.img;
    return sum;
}
void output(Complex c1, Complex c2,Complex sum)
{
    printf("The sum is %.1f+i%.1f", sum.real,sum.img);
}