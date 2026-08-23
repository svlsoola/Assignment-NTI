#include <stdio.h>

void calculate1(int x, int y, int *sum, int *mul)
{
    *sum = x + y;
    *mul = x * y;
}

int main()
{
    int x = 5;
    int y = 3;
    int sum, mul;

    calculate1(x, y, &sum, &mul);

    printf("Way 1:\n");
    printf("Sum = %d\n", sum);
    printf("Multiplication = %d\n\n", mul);

    return 0;
}