#include <stdio.h>

int main() {
    int n, i;
    long long int term1 = 0, term2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence:\n");

    
    printf("%lld, %lld, ", term1, term2);

    
    for (i = 3; i <= n; i++) {
        nextTerm = term1 + term2;
        printf("%lld, ", nextTerm);

        
        term1 = term2;
        term2 = nextTerm;
    }

    printf("\n");

    return 0;
}
