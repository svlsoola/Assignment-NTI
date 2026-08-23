#include <stdio.h>
#include <string.h>

int searchString(char data[], char target[])
{
    if (strstr(data, target) != NULL)
    {
        return 1;
    }

    return 0;
}

int main()
{
    char data[100];
    char target[50];

    printf("Enter the data: ");
    fgets(data, sizeof(data), stdin);

    printf("Enter the string to search for: ");
    fgets(target, sizeof(target), stdin);

    /* Remove newline from target */
    target[strcspn(target, "\n")] = '\0';

    if (searchString(data, target))
    {
        printf("String found\n");
    }
    else
    {
        printf("String not found\n");
    }

    return 0;
}