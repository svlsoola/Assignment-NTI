#include <stdio.h>

int main()
{
    int Numbers[100];
    int NumberOfElements;
    int Counter;
    printf("Enter Number Of Elements: ");
    scanf("%d", &NumberOfElements);
    printf("Enter Array Elements:\n");
    for (Counter = 0; Counter < NumberOfElements; Counter++)
    {
        printf("Element %d: ", Counter);
        scanf("%d", &Numbers[Counter]);
    }
    printf("\nArray Elements Are:\n");
    for (Counter = 0; Counter < NumberOfElements; Counter++)
    {
        printf("%d ", Numbers[Counter]);
    }
    return 0;
}