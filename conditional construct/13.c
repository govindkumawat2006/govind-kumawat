#include <stdio.h>

int main() {
    int choice;
    float area, radius, length, breadth, base, height;
    
    printf("1. Circle\n2. Rectangle\n3. Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &radius);
            area = 3.14 * radius * radius;
            printf("Area of Circle: %.2f", area);
            break;
        case 2:
            printf("Enter length and breadth: ");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;
            printf("Area of Rectangle: %.2f", area);
            break;
        case 3:
            printf("Enter base and height: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of Triangle: %.2f", area);
            break;
        default:
            printf("Invalid Choice");
    }

    return 0;
}

