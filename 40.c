#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long binaryNum) {
    int decimalNum = 0, i = 0, remainder;
    while (binaryNum != 0) {
        remainder = binaryNum % 10;
        binaryNum /= 10;
        decimalNum += remainder * pow(2, i);
        ++i;
    }
    return decimalNum;
}

long long decimalToBinary(int decimalNum) {
    long long binaryNum = 0, remainder, base = 1;
    while (decimalNum > 0) {
        remainder = decimalNum % 2;
        decimalNum /= 2;
        binaryNum += remainder * base;
        base *= 10;
    }
    return binaryNum;
}

int main() {
    int choice;
    printf("1. Convert Binary to Decimal\n2. Convert Decimal to Binary\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        long long binaryNum;
        printf("Enter a binary number: ");
        scanf("%lld", &binaryNum);
        int decimalNum = binaryToDecimal(binaryNum);
        printf("Decimal equivalent: %d\n", decimalNum);
    } else if (choice == 2) {
        int decimalNum;
        printf("Enter a decimal number: ");
        scanf("%d", &decimalNum);
        long long binaryNum = decimalToBinary(decimalNum);
        printf("Binary equivalent: %lld\n", binaryNum);
    } else {
        printf("Invalid choice.\n");
        return 1;
    }

    return 0;
}
