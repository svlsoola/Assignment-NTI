#include <stdio.h>

int main()
{
    int Numbers[100];
    int NumberOfElements;
    int Counter;
    int Sum = 0;
    printf("Enter Number Of Elements: ");
    scanf("%d", &NumberOfElements);
    printf("Enter Array Elements:\n");
    for (Counter = 0; Counter < NumberOfElements; Counter++)
    {
        printf("Element %d: ", Counter);
        scanf("%d", &Numbers[Counter]);

        Sum = Sum + Numbers[Counter];
    }
    printf("\nSum Of Array Elements = %d\n", Sum);
    return 0;
}