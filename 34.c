#include <stdio.h>

int isPrime(int num) {
    if (num <= 1)
        return 0; // Not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}

void printPrime(int lower, int upper) {
    printf("Prime numbers between %d and %d are:\n", lower, upper);
    for (int i = lower; i <= upper; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int lower, upper;
    printf("Enter the lower and upper limits: ");
    scanf("%d %d", &lower, &upper);

    printPrime(lower, upper);

    return 0;
}
