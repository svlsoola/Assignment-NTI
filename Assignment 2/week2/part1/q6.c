#include <stdio.h>

int main()
{
    int Array1[100];
    int Array2[100];
    int Array3[200];

    int Size1;
    int Size2;
    int Counter1 = 0;
    int Counter2 = 0;
    int Counter3 = 0;
    printf("Enter size of first array : ");
    scanf("%d", &Size1);
    printf("Enter elements in first array : ");
    for (Counter1 = 0; Counter1 < Size1; Counter1++)
    {
        scanf("%d", &Array1[Counter1]);
    }
    printf("Enter size of second array : ");
    scanf("%d", &Size2);
    printf("Enter elements in second array : ");
    for (Counter2 = 0; Counter2 < Size2; Counter2++)
    {
        scanf("%d", &Array2[Counter2]);
    }
    Counter1 = 0;
    Counter2 = 0;
    while (Counter1 < Size1 && Counter2 < Size2)
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
    while (Counter1 < Size1)
    {
        Array3[Counter3] = Array1[Counter1];
        Counter1++;
        Counter3++;
    }
    while (Counter2 < Size2)
    {
        Array3[Counter3] = Array2[Counter2];
        Counter2++;
        Counter3++;
    }
    printf("\nMerged Array : ");
    for (Counter3 = 0; Counter3 < Size1 + Size2; Counter3++)
    {
        printf("%d    ", Array3[Counter3]);
    }
    return 0;
}