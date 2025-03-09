#include <stdio.h>

int main() {
    int a = 0, b = 1, next, count = 0;
    
    printf("First 10 Fibonacci numbers:\n");
    while (count < 10) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
        count++;
    }
    return 0;
}

