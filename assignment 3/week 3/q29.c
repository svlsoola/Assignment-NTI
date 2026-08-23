#include <stdio.h>
#include <string.h>

/* Reverse string using iteration */
void reverseIterative(char str[])
{
    int i = 0;
    int j = strlen(str) - 1;
    char temp;

    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

/* Reverse string using recursion */
void reverseRecursive(char str[], int start, int end)
{
    char temp;

    if (start >= end)
    {
        return;
    }

    temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverseRecursive(str, start + 1, end - 1);
}

int main()
{
    char str1[100];
    char str2[100];

    printf("Enter a string: ");
    gets(str1);

    strcpy(str2, str1);

    /* Iteration */
    reverseIterative(str1);

    printf("Reverse using iteration: %s\n", str1);

    /* Recursion */
    reverseRecursive(str2, 0, strlen(str2) - 1);

    printf("Reverse using recursion: %s\n", str2);

    return 0;
}