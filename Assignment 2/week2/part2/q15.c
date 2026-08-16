#include <stdio.h>

int main()
{
    int Numbers[100];
    int Counter;
    int Times;
    int Temp;
    printf("Enter 10 elements array: ");
    for (Counter = 0; Counter < 10; Counter++)
    {
        scanf("%d", &Numbers[Counter]);
    }
    printf("Enter number of times to right rotate: ");
    scanf("%d", &Times);
    printf("Array before rotation: ");
    for (Counter = 0; Counter < 10; Counter++)
    {
        printf("%d ", Numbers[Counter]);
    }
    for (Counter = 0; Counter < Times; Counter++)
    {
        Temp = Numbers[9];

        for (int j = 9; j > 0; j--)
        {
            Numbers[j] = Numbers[j - 1];
        }

        Numbers[0] = Temp;
    }
    printf("\nArray after rotation: ");
    for (Counter = 0; Counter < 10; Counter++)
    {
        printf("%d ", Numbers[Counter]);
    }
    return 0;
}