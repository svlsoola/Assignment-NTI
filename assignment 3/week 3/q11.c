#include <stdio.h>

int mostRepeated(int arr[], int n)
{
    int maxCount = 0;
    int mostRepeatedElement = arr[0];

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count > maxCount)
        {
            maxCount = count;
            mostRepeatedElement = arr[i];
        }
    }

    return mostRepeatedElement;
}

int main()
{
    int arr[] = {2, 5, 2, 7, 5, 2, 9};
    int n = 7;

    printf("Most repeated element = %d", mostRepeated(arr, n));

    return 0;
}