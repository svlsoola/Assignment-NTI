#include <stdio.h>

int removeDuplicates(int arr[], int n)
{
    int newSize = 0;

    for (int i = 0; i < n; i++)
    {
        int found = 0;

        for (int j = 0; j < newSize; j++)
        {
            if (arr[i] == arr[j])
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    return newSize;
}

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 5, 5};
    int n = 9;

    n = removeDuplicates(arr, n);

    printf("Array after removing duplicates:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}