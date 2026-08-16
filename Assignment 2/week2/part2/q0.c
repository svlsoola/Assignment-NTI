#include <stdio.h>

int main()
{
    char String[100];
    char Character;
    int Counter;
    int Frequency = 0;
    printf("Enter a string : ");
    gets(String);
    printf("Enter a character : ");
    scanf("%c", &Character);
    for (Counter = 0; String[Counter] != '\0'; Counter++)
    {
        if (String[Counter] == Character)
        {
            Frequency++;
        }
    }
    printf("Frequency of %c = %d", Character, Frequency);
    return 0;
}