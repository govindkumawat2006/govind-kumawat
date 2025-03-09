#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("Number is Positive\n");
        if (num % 2 == 0)
            printf("Number is Even");
        else
            printf("Number is Odd");
    }
    else if (num < 0)
        printf("Number is Negative");
    else
        printf("Number is Zero");

    return 0;
}

