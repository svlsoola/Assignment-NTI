#include <stdio.h>

int maxZerosBetweenOnes(unsigned int num)
{
    int maxZeros = 0;
    int zeros = 0;
    int foundOne = 0;

    while (num > 0)
    {
        if (num % 2 == 1)
        {
            if (foundOne && zeros > maxZeros)
            {
                maxZeros = zeros;
            }

            foundOne = 1;
            zeros = 0;
        }
        else
        {
            if (foundOne)
            {
                zeros++;
            }
        }

        num = num / 2;
    }

    return maxZeros;
}

int main()
{
    unsigned int num;

    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Maximum zeros between two ones = %d\n",
           maxZerosBetweenOnes(num));

    return 0;
}