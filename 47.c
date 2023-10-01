#include <stdio.h>
#include <math.h>

double calculateMean(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (double)sum / n;
}

double calculateStandardDeviation(int arr[], int n) {
    double mean = calculateMean(arr, n);
    double sumOfSquares = 0;

    for (int i = 0; i < n; i++) {
        sumOfSquares += pow(arr[i] - mean, 2);
    }

    return sqrt(sumOfSquares / n);
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive number of elements.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    double stdDeviation = calculateStandardDeviation(arr, n);
    printf("Standard Deviation: %.2lf\n", stdDeviation);

    return 0;
}
