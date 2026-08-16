#include <stdio.h>

int main()
{
    char String1[100];
    char String2[100];
    int Counter = 0;
    int Index = 0;
    printf("Enter first string : ");
    gets(String1);
    printf("Enter second string : ");
    gets(String2);
    while (String1[Counter] != '\0')
    {
        Counter++;
    }
    while (String2[Index] != '\0')
    {
        String1[Counter] = String2[Index];
        Counter++;
        Index++;
    }
    String1[Counter] = '\0';
    printf("Concatenated string : %s", String1);
    return 0;
}