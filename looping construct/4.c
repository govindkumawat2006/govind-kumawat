#include <stdio.h>

int main() {
    int num, reverse = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    
    while (temp != 0) {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }
    
    if (reverse == num)
        printf("Palindrome Number\n");
    else
        printf("Not a Palindrome Number\n");
    return 0;
}

