#include <stdio.h>

struct Distance {
    int feet;
    float inches;
};

void addDistances(struct Distance d1, struct Distance d2, struct Distance *result) {
    result->feet = d1.feet + d2.feet;
    result->inches = d1.inches + d2.inches;

    if (result->inches >= 12.0) {
        result->feet += 1;
        result->inches -= 12.0;
    }
}

int main() {
    struct Distance distance1, distance2, sum;

    printf("Enter first distance (feet inches): ");
    scanf("%d %f", &distance1.feet, &distance1.inches);

    printf("Enter second distance (feet inches): ");
    scanf("%d %f", &distance2.feet, &distance2.inches);

    addDistances(distance1, distance2, &sum);

    printf("Sum of distances: %d feet %.2f inches\n", sum.feet, sum.inches);

    return 0;
}
