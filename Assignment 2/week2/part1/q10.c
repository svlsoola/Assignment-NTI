#include <stdio.h>

int main()
{
    int Numbers[100];
    int NumberOfElements;
    int Counter;
    int Number;
    int Found;
    printf("Enter size of the array : ");
    scanf("%d", &NumberOfElements);
    printf("Enter elements in array : ");
    for (Counter = 0; Counter < NumberOfElements; Counter++)
    {
        scanf("%d", &Numbers[Counter]);
    }
    printf("Missing numbers are : ");
    for (Number = 1; Number <= NumberOfElements + 1; Number++)
    {
        Found = 0;
        for (Counter = 0; Counter < NumberOfElements; Counter++)
        {
            if (Numbers[Counter] == Number)
            {
                Found = 1;
                break;
            }
        }
        if (Found == 0)
        {
            printf("%d    ", Number);
        }
    }
    return 0;
}