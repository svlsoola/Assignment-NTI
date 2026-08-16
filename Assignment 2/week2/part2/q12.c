#include <stdio.h>

int main()
{
    int Array1[20] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int Array2[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int Counter;
    for (Counter = 9; Counter >= 0; Counter--)
    {
        Array1[Counter * 2] = Array1[Counter];
    }
    for (Counter = 0; Counter < 10; Counter++)
    {
        Array1[Counter * 2 + 1] = Array2[Counter];
    }
    printf("Array after insertion : ");
    for (Counter = 0; Counter < 20; Counter++)
    {
        printf("%d ", Array1[Counter]);
    }
    return 0;
}