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

int canExpressAsSumOfPrimes(int num) {
    for (int i = 2; i <= num / 2; i++) {
        if (isPrime(i) && isPrime(num - i))
            return 1; // Can be expressed as sum of two primes
    }
    return 0; // Cannot be expressed as sum of two primes
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (canExpressAsSumOfPrimes(num))
        printf("%d can be expressed as the sum of two prime numbers.\n", num);
    else
        printf("%d cannot be expressed as the sum of two prime numbers.\n", num);

    return 0;
}
