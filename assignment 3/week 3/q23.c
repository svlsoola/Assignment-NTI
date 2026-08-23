#include <stdio.h>

int sumDigits(int num)
{
    int sum = 0;

    while (num != 0)
    {
        sum = sum + (num % 10);
        num = num / 10;
    }

    return sum;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits = %d\n", sumDigits(num));

    return 0;
}