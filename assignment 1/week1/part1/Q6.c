#include <stdio.h>

int main() {
    int num, position = -1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        num = num >> 1;
        position++;
    }

    printf("The highest order set bit is at position %d\n", position);

    return 0;
}