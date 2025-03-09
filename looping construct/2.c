#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
        printf("1/%d + ", i);
    }
    printf("\nSum of harmonic series: %.2f\n", sum);
    return 0;
}

