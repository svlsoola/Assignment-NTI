#include <stdio.h>

unsigned char circularShiftLeft(unsigned char num, int shift)
{
    return (num << shift) | (num >> (8 - shift));
}

int main()
{
    unsigned char num = 0xB1;
    int shift = 1;

    unsigned char result;

    result = circularShiftLeft(num, shift);

    printf("Original = 0x%X\n", num);
    printf("After circular shift left = 0x%X\n", result);

    return 0;
}