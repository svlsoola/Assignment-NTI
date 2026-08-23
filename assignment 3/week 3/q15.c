#include <stdio.h>

int main()
{
    int arr[10];
    int sum = 0;
    int expectedSum;
    int repeated;

    printf("Enter 10 elements:\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    expectedSum = 10 * 11 / 2;

    repeated = sum - expectedSum;

    printf("Repeated number = %d\n", repeated);

    return 0;
}