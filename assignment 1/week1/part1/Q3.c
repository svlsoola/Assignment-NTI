#include <stdio.h>

int main() {
    int num, n;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the bit position (n) you want to check: ");
    scanf("%d", &n);

    if ((num >> n) & 1) {
        printf("Bit %d is 1 (set)\n", n);
    } else {
        printf("Bit %d is 0 (not set)\n", n);
    }

    return 0;
}