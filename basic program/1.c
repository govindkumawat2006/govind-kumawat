#include <stdio.h>

int main() {
    int hours, minutes, totalMinutes;
    
    // Taking input from the user
    printf("Enter hours: ");
    scanf("%d", &hours);
    
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    
    // Calculating total minutes
    totalMinutes = (hours * 60) + minutes;
    
    // Displaying the result
    printf("Total minutes: %d\n", totalMinutes);
    
    return 0;
}

