#include <stdio.h>

int sumOfNaturals(int num) {
    if (num == 0)
        return 0;
    return num + sumOfNaturals(num - 1);
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    int sum = sumOfNaturals(n);
    printf("Sum of first %d natural numbers is %d.\n", n, sum);

    return 0;
}
