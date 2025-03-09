#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int temp = n, sum = 0, digits = 0;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp != 0) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    return (sum == n);
}

int isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n/2; i++) {
        if (n % i == 0)
            sum += i;
    }
    return (sum == n);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isArmstrong(num))
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);
    
    if (isPerfect(num))
        printf("%d is a Perfect number\n", num);
    else
        printf("%d is not a Perfect number\n", num);
    return 0;
}

