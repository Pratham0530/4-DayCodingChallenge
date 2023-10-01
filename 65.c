#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

void differenceBetweenTimes(struct Time t1, struct Time t2, struct Time *difference) {
    int totalSeconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int totalSeconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    int diffSeconds = totalSeconds1 - totalSeconds2;

    if (diffSeconds < 0) {
        diffSeconds = -diffSeconds;
    }

    difference->hours = diffSeconds / 3600;
    difference->minutes = (diffSeconds % 3600) / 60;
    difference->seconds = diffSeconds % 60;
}

int main() {
    struct Time time1, time2, timeDiff;

    printf("Enter the first time (hours minutes seconds): ");
    scanf("%d %d %d", &time1.hours, &time1.minutes, &time1.seconds);

    printf("Enter the second time (hours minutes seconds): ");
    scanf("%d %d %d", &time2.hours, &time2.minutes, &time2.seconds);

    differenceBetweenTimes(time1, time2, &timeDiff);

    printf("Time difference: %d hours %d minutes %d seconds\n", timeDiff.hours, timeDiff.minutes, timeDiff.seconds);

    return 0;
}
