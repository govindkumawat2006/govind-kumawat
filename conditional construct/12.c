#include <stdio.h>

int main() {
    int choice, a, b;
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(choice) {
        case 1: printf("Result: %d", a + b); break;
        case 2: printf("Result: %d", a - b); break;
        case 3: printf("Result: %d", a * b); break;
        case 4: 
            if(b != 0)
                printf("Result: %.2f", (float)a / b);
            else
                printf("Division by zero error");
            break;
        default: printf("Invalid Choice");
    }

    return 0;
}

