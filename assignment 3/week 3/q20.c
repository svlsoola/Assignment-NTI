#include <stdio.h>

void countZerosOnes(unsigned int num)
{
    int zeros = 0;
    int ones = 0;

    while (num > 0)
    {
        if (num % 2 == 1)
        {
            ones++;
        }
        else
        {
            zeros++;
        }

        num = num / 2;
    }

    printf("Number of zeros = %d\n", zeros);
    printf("Number of ones = %d\n", ones);
}

int main()
{
    unsigned int num;

    printf("Enter an integer: ");
    scanf("%u", &num);

    countZerosOnes(num);

    return 0;
}