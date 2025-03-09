#include <stdio.h>

int main() {
    int num, prev = -1;
    printf("Enter numbers (stop on duplicate):\n");
    
    while (1) {
        scanf("%d", &num);
        if (num == prev) break;
        prev = num;
    }
    
    printf("Duplicate number entered, stopping.");
    return 0;
}

