#include <stdio.h>

int main()
{
    char String1[100];
    char String2[100];
    int Counter = 0;

    printf("Enter a string : ");
    gets(String1);

    while (String1[Counter] != '\0')
    {
        String2[Counter] = String1[Counter];
        Counter++;
    }

    String2[Counter] = '\0';

    printf("Copied string : %s", String2);

    return 0;
}