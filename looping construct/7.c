#include <stdio.h>

int main() {
    int num, count = 0;
    float sum = 0;
    
    do {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &num);
        if (num != 0) {
            sum += num;
            count++;
        }
    } while (num != 0);
    
    printf("Average: %.2f\n", sum / count);
    return 0;
}

