#include <stdio.h>

int main() {
    int y;
    scanf_s("%d", &y);
    if (y % 400 == 0) {
        printf("%d is a leap year", y);
    }
    else if (y % 4 == 0) {
        if (y % 100 != 0) printf("%d is a leap year", y);
    }
        else
            printf("%d is not a leap year", y);
    }