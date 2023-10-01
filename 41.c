#include <stdio.h>
#include <math.h>

int octalToDecimal(int octalNum) {
    int decimalNum = 0, i = 0, remainder;
    while (octalNum != 0) {
        remainder = octalNum % 10;
        octalNum /= 10;
        decimalNum += remainder * pow(8, i);
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

int main() {
    int choice;
    printf("1. Convert Octal to Decimal\n2. Convert Decimal to Octal\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int octalNum;
        printf("Enter an octal number: ");
        scanf("%o", &octalNum); // %o format specifier reads octal input
        int decimalNum = octalToDecimal(octalNum);
        printf("Decimal equivalent: %d\n", decimalNum);
    } else if (choice == 2) {
        int decimalNum;
        printf("Enter a decimal number: ");
        scanf("%d", &decimalNum);
        int octalNum = decimalToOctal(decimalNum);
        printf("Octal equivalent: %o\n", octalNum); // %o format specifier prints octal output
    } else {
        printf("Invalid choice.\n");
        return 1;
    }

    return 0;
}
