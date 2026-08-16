#include <stdio.h>

int main() {
    int num, i;
    int countOnes = 0, countZeros = 0;
    int totalBits = 32;

    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 0; i < totalBits; i++) {
        if ((num >> i) & 1) {
            countOnes++;
        } else {
            countZeros++;
        }
    }
    printf("Number of 1s = %d\n", countOnes);
    printf("Number of 0s = %d\n", countZeros);

    return 0;
}