#include <stdio.h>

int main()
{
    char String[100];
    int Counter = 0;
    int Index = 0;

    printf("Enter a string : ");
    gets(String);

    while (String[Counter] != '\0')
    {
        if (String[Counter] != ' ')
        {
            String[Index] = String[Counter];
            Index++;
        }

        Counter++;
    }

    String[Index] = '\0';

    printf("String after removing spaces : %s", String);

    return 0;
}