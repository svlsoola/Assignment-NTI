#include <stdio.h>

void reverseArray(int arr[], int n)
{
    int temp;

    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    reverseArray(arr, n);

    printf("Reversed array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}