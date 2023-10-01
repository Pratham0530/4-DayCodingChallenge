#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};

void addComplex(struct Complex c1, struct Complex c2, struct Complex *result) {
    result->real = c1.real + c2.real;
    result->imaginary = c1.imaginary + c2.imaginary;
}

int main() {
    struct Complex complex1, complex2, sum;

    printf("Enter real and imaginary parts of the first complex number: ");
    scanf("%f %f", &complex1.real, &complex1.imaginary);

    printf("Enter real and imaginary parts of the second complex number: ");
    scanf("%f %f", &complex2.real, &complex2.imaginary);

    addComplex(complex1, complex2, &sum);

    printf("Sum of complex numbers: %.2f + %.2fi\n", sum.real, sum.imaginary);

    return 0;
}
