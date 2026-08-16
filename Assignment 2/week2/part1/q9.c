#include <stdio.h>

int main()
{
    int Numbers[100];
    int NumberOfElements;
    int Counter;
    printf("Enter size of the array : ");
    scanf("%d", &NumberOfElements);
    printf("Enter elements in array : ");
    for (Counter = 0; Counter < NumberOfElements; Counter++)
    {
        scanf("%d", &Numbers[Counter]);
    }
    printf("Alternate elements in array : ");
    for (Counter = 0; Counter < NumberOfElements; Counter = Counter + 2)
    {
        printf("%d    ", Numbers[Counter]);
    }
    return 0;
}