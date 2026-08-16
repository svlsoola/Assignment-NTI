#include <stdio.h>

int main() {
    int units;
    float rate, charge, surcharge, totalBill;

    printf("Enter total units consumed: ");
    scanf("%d", &units);

    if (units <= 50) {
        rate = 0.50;
    } else if (units <= 150) {
        rate = 0.75;
    } else if (units <= 250) {
        rate = 1.20;
    } else {
        rate = 1.50;
    }

    charge = units * rate;
    surcharge = charge * 0.20;
    totalBill = charge + surcharge;

    printf("Electricity Bill = Rs. %.2f\n", totalBill);

    return 0;
}