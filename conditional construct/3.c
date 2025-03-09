#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the value of m: ");
    scanf("%d", &m);

    if(m > 0)
        n = 1;
    else if(m == 0)
        n = 0;
    else
        n = -1;

    printf("The value of n is: %d\n", n);
    return 0;
}

