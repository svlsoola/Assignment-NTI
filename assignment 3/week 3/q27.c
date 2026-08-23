#include <stdio.h>

void moveNumberToEnd(int arr[], int n, int number)
{
    int temp[10];
    int index = 0;

    /* Put elements different from number first */
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != number)
        {
            temp[index] = arr[i];
            index++;
        }
    }

    /* Put the repeated number at the end */
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == number)
        {
            temp[index] = arr[i];
            index++;
        }
    }

    /* Copy the result back to the original array */
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int arr[] = {1, 2, 5, 7, 1, 1, 3, 1, 7};
    int n = 9;
    int number = 1;

    moveNumberToEnd(arr, n, number);

    printf("Array after modification:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}