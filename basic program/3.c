#include <stdio.h>

int main() {
    float kmph, mph;
    
    // Taking input
    printf("Enter speed in kilometers per hour: ");
    scanf("%f", &kmph);
    
    // Conversion formula: 1 km/h = 0.621371 mph
    mph = kmph * 0.621371;
    
    // Displaying result
    printf("Speed in miles per hour: %.2f\n", mph);
    
    return 0;
}

