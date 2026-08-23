#include <stdio.h>

void findMaxMin(int arr[], int n)
{
    int max = arr[0];
    int min = arr[0];

    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }

        if (arr[i] < min)
        {
            min = arr[i];
            minIndex = i;
        }
    }

    printf("Maximum = %d\n", max);
    printf("Maximum index = %d\n", maxIndex);

    printf("Minimum = %d\n", min);
    printf("Minimum index = %d\n", minIndex);
}

int main()
{
    int arr[] = {10, 5, 20, 8, 3, 15};
    int n = 6;

    findMaxMin(arr, n);

    return 0;
}