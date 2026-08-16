#include <stdio.h>

int main()
{
    char String[100];
    int Counter = 0;
    printf("Enter a string : ");
    gets(String);
    while (String[Counter] != '\0')
    {
        Counter++;
    }
    printf("Length of string = %d", Counter);
    return 0;
}