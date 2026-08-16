#include <stdio.h>

int main()
{
    int Array1[100];
    int Array2[100];
    int Array3[200];
    int Size;
    int Counter1 = 0;
    int Counter2 = 0;
    int Counter3 = 0;
    float Median;
    printf("Enter size of the arrays : ");
    scanf("%d", &Size);
    printf("Enter elements in first array : ");
    for (Counter1 = 0; Counter1 < Size; Counter1++)
    {
        scanf("%d", &Array1[Counter1]);
    }
    printf("Enter elements in second array : ");
    for (Counter2 = 0; Counter2 < Size; Counter2++)
    {
        scanf("%d", &Array2[Counter2]);
    }
    Counter1 = 0;
    Counter2 = 0;
    while (Counter1 < Size && Counter2 < Size)
    {
        if (Array1[Counter1] < Array2[Counter2])
        {
            Array3[Counter3] = Array1[Counter1];
            Counter1++;
        }
        else
        {
            Array3[Counter3] = Array2[Counter2];
            Counter2++;
        }

        Counter3++;
    }
    while (Counter1 < Size)
    {
        Array3[Counter3] = Array1[Counter1];
        Counter1++;
        Counter3++;
    }
    while (Counter2 < Size)
    {
        Array3[Counter3] = Array2[Counter2];
        Counter2++;
        Counter3++;
    }
    if ((2 * Size) % 2 == 0)
    {
        Median = (Array3[Size - 1] + Array3[Size]) / 2.0;
    }
    printf("\nMerged Array : ");
    for (Counter3 = 0; Counter3 < 2 * Size; Counter3++)
    {
        printf("%d    ", Array3[Counter3]);
    }
    printf("\nMedian = %.2f", Median);
    return 0;
}