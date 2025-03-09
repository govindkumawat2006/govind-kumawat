#include <stdio.h>

int main() {
    int roll;
    char name[30];
    int physics, chemistry, computer;
    float total, percentage;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter marks of Physics, Chemistry, Computer: ");
    scanf("%d %d %d", &physics, &chemistry, &computer);

    total = physics + chemistry + computer;
    percentage = (total / 300.0) * 100;

    printf("Roll No: %d\n", roll);
    printf("Name: %s\n", name);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f\n", percentage);

    if(percentage >= 60)
        printf("Division: First\n");
    else if(percentage >= 45)
        printf("Division: Second\n");
    else if(percentage >= 33)
        printf("Division: Third\n");
    else
        printf("Fail\n");

    return 0;
}

