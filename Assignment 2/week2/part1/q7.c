#include <stdio.h>

int main()
{
    int Numbers[100];
    int NumberOfElements;
    int Counter;
    int Position;

    printf("Enter size of the array : ");
    scanf("%d", &NumberOfElements);
    printf("Enter elements in array : ");
    for (Counter = 0; Counter < NumberOfElements; Counter++)
    {
        scanf("%d", &Numbers[Counter]);
    }
    printf("Enter the position of element to delete : ");
    scanf("%d", &Position);
    if (Position < 1 || Position > NumberOfElements)
    {
        printf("Deletion is not possible\n");
    }
    else
    {
        for (Counter = Position - 1; Counter < NumberOfElements - 1; Counter++)
        {
            Numbers[Counter] = Numbers[Counter + 1];
        }
        printf("Array elements after deletion : ");

        for (Counter = 0; Counter < NumberOfElements - 1; Counter++)
        {
            printf("%d    ", Numbers[Counter]);
        }
    }
    return 0;
}