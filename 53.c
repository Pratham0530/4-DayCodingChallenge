#include <stdio.h>

void cyclicSwap(int *a, int *b, int *c) {
    int temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    cyclicSwap(&a, &b, &c);

    printf("After cyclic swap: a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
