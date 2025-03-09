#include <stdio.h>

int main() {
    char forename[50], surname[50];
    int yearOfBirth;
    
    // Taking input from user
    printf("Enter your forename: ");
    scanf("%s", forename);
    
    printf("Enter your surname: ");
    scanf("%s", surname);
    
    printf("Enter your year of birth: ");
    scanf("%d", &yearOfBirth);
    
    // Displaying output sequentially
    printf("%s %s %d\n", forename, surname, yearOfBirth);
    
    return 0;
}

