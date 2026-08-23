#include <stdio.h>

unsigned char reverseBits(unsigned char num)
{
    unsigned char result = 0;

    for (int i = 0; i < 8; i++)
    {
        result = result << 1;
        result = result | (num & 1);

        num = num >> 1;
    }

    return result;
}

void printBinary(unsigned char num)
{
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", (num >> i) & 1);
    }
}

int main()
{
    unsigned char num;

    printf("Enter an 8-bit number: ");
    scanf("%hhu", &num);

    printf("Original: ");
    printBinary(num);

    num = reverseBits(num);

    printf("\nReversed: ");
    printBinary(num);

    return 0;
}