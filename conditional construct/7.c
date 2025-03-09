#include <stdio.h>

int main() {
    int units;
    float charge, total, surcharge = 0;
    
    printf("Enter units consumed: ");
    scanf("%d", &units);

    if(units <= 199)
        charge = units * 1.20;
    else if(units < 400)
        charge = units * 1.50;
    else if(units < 600)
        charge = units * 1.80;
    else
        charge = units * 2.00;

    if(charge > 400)
        surcharge = charge * 0.15;

    total = charge + surcharge;
    if(total < 100)
        total = 100;

    printf("Total bill: Rs. %.2f\n", total);
    return 0;
}

