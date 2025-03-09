#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three angles: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a + b + c == 180)
        printf("Triangle can be formed.\n");
    else
        printf("Triangle cannot be formed.\n");

    return 0;
}

