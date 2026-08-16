#include <stdio.h>

int main() {
    int num;
    int totalBits = 32;
    int foundFirstOne = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Binary representation: ");

    for (int i = totalBits - 1; i >= 0; i--) {
        int bit = (num >> i) & 1;

        if (bit == 1) {
            foundFirstOne = 1;
        }

        if (foundFirstOne || i == 0) {
            printf("%d", bit);
        }
    }

    printf("\n");

    return 0;
}