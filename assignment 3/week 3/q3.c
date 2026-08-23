#include <stdio.h>
void swapArrays(int a[], int b[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}
int main()
{
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};
    swapArrays(a, b, 3);
    printf("Array A: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nArray B: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}