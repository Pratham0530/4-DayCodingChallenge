#include <stdio.h>

unsigned long long factorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    return num * factorial(num - 1);
}

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    unsigned long long fact = factorial(n);
    printf("Factorial of %d is %llu.\n", n, fact);

    return 0;
}
