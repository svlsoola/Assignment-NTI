#include <stdio.h>

int main()
{
    int Numbers[100];
    int NumberOfElements;
    int Counter;
    int Largest;
    int SecondLargest;
    printf("Enter Number Of Elements: ");
    scanf("%d", &NumberOfElements);
    printf("Enter Array Elements:\n");
    for (Counter = 0; Counter < NumberOfElements; Counter++)
    {
        printf("Element %d: ", Counter);
        scanf("%d", &Numbers[Counter]);
    }
    Largest = Numbers[0];
    SecondLargest = Numbers[1];
    if (SecondLargest > Largest)
    {
        int Temp = Largest;
        Largest = SecondLargest;
        SecondLargest = Temp;
    }
    for (Counter = 2; Counter < NumberOfElements; Counter++)
    {
        if (Numbers[Counter] > Largest)
        {
            SecondLargest = Largest;
            Largest = Numbers[Counter];
        }
        else if (Numbers[Counter] > SecondLargest)
        {
            SecondLargest = Numbers[Counter];
        }
    }
    printf("\nLargest Element = %d\n", Largest);
    printf("Second Largest Element = %d\n", SecondLargest);
    return 0;
}