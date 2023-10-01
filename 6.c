#include <stdio.h>

int main() {
    int dividend, divisor, quotient, remainder;

    // Input the dividend and divisor
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    // Compute quotient and remainder
    quotient = dividend / divisor;
    remainder = dividend % divisor;

    // Display the results
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}