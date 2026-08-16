#include <stdio.h>

int main() {
    int month, days;

    printf("Enter month (1-12): ");
    scanf("%d", &month);

    if (month == 1 || month == 3 || month == 5 || month == 7 ||
        month == 8 || month == 10 || month == 12) {
        days = 31;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else if (month == 2) {
        days = 28;
    } else {
        printf("Invalid month\n");
        return 0;
    }

    printf("Number of days in month = %d\n", days);

    return 0;
}