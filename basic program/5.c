#include <stdio.h>

int main() {
    float height, width, perimeter;
    
    // Taking input
    printf("Enter the height of the rectangle: ");
    scanf("%f", &height);
    
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    
    // Calculating perimeter: 2 * (height + width)
    perimeter = 2 * (height + width);
    
    // Displaying result
    printf("Perimeter of the rectangle: %.2f\n", perimeter);
    
    return 0;
}

