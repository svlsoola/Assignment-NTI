#include <stdio.h>

int main() {
    unsigned int num, n;
    int totalBits = 32;
    printf("Enter a number: ");
    scanf("%u", &num);
    printf("Enter number of positions to rotate: ");
    scanf("%u", &n);
    unsigned int result = (num << n) | (num >> (totalBits - n));

    printf("Number after left rotating by %d = %u\n", n, result);

    return 0;
}