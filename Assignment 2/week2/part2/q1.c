#include <stdio.h>

int main()
{
    char String[100];
    int Counter;
    int Vowels = 0;
    int Consonants = 0;
    int Digits = 0;
    int Spaces = 0;

    printf("Enter a string : ");
    gets(String);

    for (Counter = 0; String[Counter] != '\0'; Counter++)
    {
        if (String[Counter] == 'a' || String[Counter] == 'e' ||
            String[Counter] == 'i' || String[Counter] == 'o' ||
            String[Counter] == 'u')
        {
            Vowels++;
        }
        else if (String[Counter] >= '0' && String[Counter] <= '9')
        {
            Digits++;
        }
        else if (String[Counter] == ' ')
        {
            Spaces++;
        }
        else
        {
            Consonants++;
        }
    }

    printf("\nVowels = %d\n", Vowels);
    printf("Consonants = %d\n", Consonants);
    printf("Digits = %d\n", Digits);
    printf("White Spaces = %d\n", Spaces);

    return 0;
}