#include <stdio.h>

/* Function to set a specific bit */
int setBit(int num, int bit)
{
    return num | (1 << bit);
}

/* Function to clear a specific bit */
int clearBit(int num, int bit)
{
    return num & ~(1 << bit);
}

int main()
{
    int num = 10;
    int bit = 1;

    printf("Original number = %d\n", num);

    num = setBit(num, bit);
    printf("After setting bit %d = %d\n", bit, num);

    num = clearBit(num, bit);
    printf("After clearing bit %d = %d\n", bit, num);

    return 0;
}