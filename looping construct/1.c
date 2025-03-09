#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        sum += 2 * i;
    }
    
    printf("Sum of %d even natural numbers is: %d\n", n, sum);
    return 0;
}

