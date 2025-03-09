#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    
    // Taking input
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    // Conversion formula: (Celsius * 9/5) + 32
    fahrenheit = (celsius * 9/5) + 32;
    
    // Displaying result
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    
    return 0;
}

