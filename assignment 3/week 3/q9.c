#include <stdio.h>
void copyWithoutRepeated(char arr[], char newArr[], int size)
{
    int seen[10] = {0};
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        int number = arr[i] - '0';
        if (seen[number] == 0)
        {
            newArr[j] = arr[i];
            j++;
            seen[number] = 1;
        }
    }
    newArr[j] = '\0';
}
int main()
{
    char arr[] = {'1', '2', '2', '3', '1', '4', '3'};
    char newArr[10];
    copyWithoutRepeated(arr, newArr, 7);
    printf("New array: %s\n", newArr);
    return 0;
}