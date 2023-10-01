#include <stdio.h>
#include <math.h>

long long binaryToDecimal(long long binaryNum) {
    long long decimalNum = 0, i = 0, remainder;
    while (binaryNum != 0) {
        remainder = binaryNum % 10;
        binaryNum /= 10;
        decimalNum += remainder * pow(2, i);
        ++i;
    }
    return decimalNum;
}

int decimalToOctal(int decimalNum) {
    int octalNum = 0, i = 1, remainder;
    while (decimalNum != 0) {
        remainder = decimalNum % 8;
        decimalNum /= 8;
        octalNum += remainder * i;
        i *= 10;
    }
    return octalNum;
}

long long binaryToOctal(long long binaryNum) {
    int decimalNum = binaryToDecimal(binaryNum);
    int octalNum = decimalToOctal(decimalNum);
    return octalNum;
}

long long octalToBinary(int octalNum) {
    int decimalNum = 0, i = 0, remainder;
    while (octalNum != 0) {
        remainder = octalNum % 10;
        octalNum /= 10;
        decimalNum += remainder * pow(8, i);
        ++i;
    }

    long long binaryNum = 0, base = 1;
    while (decimalNum != 0) {
        remainder = decimalNum % 2;
        decimalNum /= 2;
        binaryNum += remainder * base;
        base *= 10;
    }
    return binaryNum;
}

int main() {
    int choice;
    printf("1. Convert Binary to Octal\n2. Convert Octal to Binary\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        long long binaryNum;
        printf("Enter a binary number: ");
        scanf("%lld", &binaryNum);
        long long octalNum = binaryToOctal(binaryNum);
        printf("Octal equivalent: %lld\n", octalNum);
    } else if (choice == 2) {
        int octalNum;
        printf("Enter an octal number: ");
        scanf("%o", &octalNum);
        long long binaryNum = octalToBinary(octalNum);
        printf("Binary equivalent: %lld\n", binaryNum);
    } else {
        printf("Invalid choice.\n");
        return 1;
    }

    return 0;
}
