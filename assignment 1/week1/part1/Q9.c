#include <stdio.h>

int main() {
    int num, count = 0;
    int totalBits = 32;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 0) {
        printf("Number of leading zeros = %d\n", totalBits);
        return 0;
    }
    for (int i = totalBits - 1; i >= 0; i--) {
        if ((num >> i) & 1) {
            break;
        }
        count++;
    }
    printf("Number of leading zeros = %d\n", count);
    return 0;
}