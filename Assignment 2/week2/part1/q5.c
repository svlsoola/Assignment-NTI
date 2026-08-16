#include <stdio.h>

int main()
{
    int Numbers[100];
    int NumberOfElements;
    int Counter;
    int Element;
    int Position;
    printf("Enter size of the array : ");
    scanf("%d", &NumberOfElements);
    printf("Enter elements in array : ");

    for (Counter = 0; Counter < NumberOfElements; Counter++)
    {
        scanf("%d", &Numbers[Counter]);
    }
    printf("Enter element to insert : ");
    scanf("%d", &Element);
    printf("Enter the element position : ");
    scanf("%d", &Position);
    for (Counter = NumberOfElements; Counter >= Position; Counter--)
    {
        Numbers[Counter] = Numbers[Counter - 1];
    }
    Numbers[Position - 1] = Element;
    NumberOfElements++;
    printf("Array elements after insertion : ");
    for (Counter = 0; Counter < NumberOfElements; Counter++)
    {
        printf("%d    ", Numbers[Counter]);
    }
    return 0;
}