#include <stdio.h>

int main()
{
    int Numbers[100];
    int NumberOfElements;
    int Counter;
    int Times;
    int Temp;
    printf("Enter 10 elements array: ");
    for (Counter = 0; Counter < 10; Counter++)
    {
        scanf("%d", &Numbers[Counter]);
    }
    printf("Enter number of times to left rotate: ");
    scanf("%d", &Times);
    printf("Array before rotation: ");
    for (Counter = 0; Counter < 10; Counter++)
    {
        printf("%d ", Numbers[Counter]);
    }
    for (Counter = 0; Counter < Times; Counter++)
    {
        Temp = Numbers[0];
        for (int j = 0; j < 9; j++)
        {
            Numbers[j] = Numbers[j + 1];
        }
        Numbers[9] = Temp;
    }
    printf("\nArray after rotation: ");
    for (Counter = 0; Counter < 10; Counter++)
    {
        printf("%d ", Numbers[Counter]);
    }
    return 0;
}