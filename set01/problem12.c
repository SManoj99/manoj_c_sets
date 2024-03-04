#include <stdio.h>
struct Complex {
    float real;
    float imag;
};
struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}

int main() {
    int n;
     printf("Enter the number of complex numbers: ");
    scanf("%d", &n);
    struct Complex numbers[n];
    printf("Enter the real and imaginary parts of each complex number:\n");
    for (int i = 0; i < n; i++) {
        printf("Complex number %d:\n", i + 1);
        printf("Real part: ");
        scanf("%f", &numbers[i].real);
        printf("Imaginary part: ");
        scanf("%f", &numbers[i].imag);
    }
    struct Complex sum;
    sum.real = 0;
    sum.imag = 0;
    for (int i = 0; i < n; i++) {
        sum = addComplex(sum, numbers[i]);
    }
    printf("\nSum of the complex numbers: %.2f + %.2fi\n", sum.real, sum.imag);
    return 0;
}