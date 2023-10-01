#include <stdio.h>

int main() {
    int n, rev = 0, rem;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        rem = n % 10;     // Get the rightmost digit
        rev = rev* 10 + rem; // Add it to the reversed number
        n= n/ 10;          // Remove the rightmost digit
    }

    printf("Reversed number: %d\n", rev);

    return 0;
}
