#include <stdio.h>

float average(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return (float)sum / n;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    printf("Average = %.2f", average(arr, n));
    return 0;
}