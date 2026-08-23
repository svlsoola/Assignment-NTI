#include <stdio.h>

void ToggleBit(unsigned char *num, unsigned char bit)
{
    *num ^= (1 << bit);
}

int main()
{
    unsigned char num = 8;

    printf("Before = %d\n", num);

    ToggleBit(&num, 3);

    printf("After = %d\n", num);

    return 0;
}