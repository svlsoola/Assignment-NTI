#include <stdio.h>

int main()
{
    int Numbers[100];
    int Even[100];
    int Odd[100];
    int NumberOfElements;
    int Counter;
    int EvenCounter = 0;
    int OddCounter = 0;
    printf("Enter size of the array : ");
    scanf("%d", &NumberOfElements);
    printf("Enter elements in array : ");
    for (Counter = 0; Counter < NumberOfElements; Counter++)
    {
        scanf("%d", &Numbers[Counter]);
    }
    for (Counter = 0; Counter < NumberOfElements; Counter++)
    {
        if (Numbers[Counter] % 2 == 0)
        {
            Even[EvenCounter] = Numbers[Counter];
            EvenCounter++;
        }
        else
        {
            Odd[OddCounter] = Numbers[Counter];
            OddCounter++;
        }
    }
    printf("\nEven elements : ");
    for (Counter = 0; Counter < EvenCounter; Counter++)
    {
        printf("%d ", Even[Counter]);
    }
    printf("\nOdd elements : ");
    for (Counter = 0; Counter < OddCounter; Counter++)
    {
        printf("%d ", Odd[Counter]);
    }
    return 0;
}