#include <stdio.h>

int main() {
    int num, n;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the bit position (n) you want to clear: ");
    scanf("%d", &n);
    num = num & ~(1 << n);
    printf("Number after clearing bit %d = %d\n", n, num);
    return 0;
}