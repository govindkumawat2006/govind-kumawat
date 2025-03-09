#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

float sumSeries() {
    float sum = 0;
    for (int i = 1; i <= 5; i++) {
        sum += (float)factorial(i) / i;
    }
    return sum;
}

int main() {
    printf("Sum of series is: %.2f\n", sumSeries());
    return 0;
}

