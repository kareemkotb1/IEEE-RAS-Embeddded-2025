#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

Complex addComplex(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

int main() {
    Complex c1, c2, sum;

    printf("Enter first complex number (real and imaginary): ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter second complex number (real and imaginary): ");
    scanf("%f %f", &c2.real, &c2.imag);

    sum = addComplex(c1, c2);

    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}
