#include <stdio.h>

int main()
{
    int Numbers[100];
    int NumberOfElements;
    int Counter;
    int Even = 0;
    int Odd = 0;
    printf("Enter Number Of Elements: ");
    scanf("%d", &NumberOfElements);
    printf("Enter Array Elements:\n");
    for (Counter = 0; Counter < NumberOfElements; Counter++)
    {
        printf("Element %d: ", Counter);
        scanf("%d", &Numbers[Counter]);

        if (Numbers[Counter] % 2 == 0)
        {
            Even++;
        }
        else
        {
            Odd++;
        }
    }
    printf("\nNumber Of Even Elements = %d\n", Even);
    printf("Number Of Odd Elements = %d\n", Odd);
    return 0;
}