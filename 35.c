#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1)
        return 0; // Not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}

int isArmstrong(int num) {
    int originalNum, remainder, n = 0, result = 0;
    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (result == num)
        return 1; // Armstrong
    else
        return 0; // Not Armstrong
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is neither prime nor Armstrong number.\n", num);

    return 0;
}
