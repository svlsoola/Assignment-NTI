#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = ~num;

    printf("Number after flipping all bits = %d\n", result);

    return 0;
}