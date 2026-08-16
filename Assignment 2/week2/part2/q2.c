#include <stdio.h>

int main()
{
    char String[100];
    int Counter;
    printf("Enter a string : ");
    gets(String);
    printf("String after removing other characters : ");
    for (Counter = 0; String[Counter] != '\0'; Counter++)
    {
        if (String[Counter] >= 'a' && String[Counter] <= 'z' ||
            String[Counter] >= 'A' && String[Counter] <= 'Z')
        {
            printf("%c", String[Counter]);
        }
    }
    return 0;
}