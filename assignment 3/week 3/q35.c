#include <stdio.h>

void swapReversed(int x[], int y[], int n)
{
    int temp;

    for (int i = 0; i < n; i++)
    {
        temp = x[i];
        x[i] = y[n - 1 - i];
        y[n - 1 - i] = temp;
    }
}

int main()
{
    int x[5] = {1, 2, 3, 4, 5};
    int y[5] = {10, 20, 30, 40, 50};

    swapReversed(x, y, 5);

    printf("Array X: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", x[i]);
    }

    printf("\nArray Y: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", y[i]);
    }

    return 0;
}