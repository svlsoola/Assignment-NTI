#include <stdio.h>

int getMax(int num)
{
    static int max;
    static int firstCall = 1;

    if (firstCall)
    {
        max = num;
        firstCall = 0;
    }
    else if (num > max)
    {
        max = num;
    }

    return max;
}

int main()
{
    printf("Max = %d\n", getMax(10));
    printf("Max = %d\n", getMax(5));
    printf("Max = %d\n", getMax(20));
    printf("Max = %d\n", getMax(15));
    printf("Max = %d\n", getMax(30));

    return 0;
}