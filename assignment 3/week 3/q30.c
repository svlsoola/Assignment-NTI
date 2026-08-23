#include <stdio.h>

unsigned char swap4Bits(unsigned char num)
{
    unsigned char high;
    unsigned char low;

    high = num >> 4;
    low = num & 0x0F;

    return (low << 4) | high;
}

int main()
{
    unsigned char num = 0xD2;
    unsigned char result;

    result = swap4Bits(num);

    printf("Original = 0x%X\n", num);
    printf("After swap = 0x%X\n", result);

    return 0;
}