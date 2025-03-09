#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        printf("The number is even.\n");
    }

    return 0;
}

