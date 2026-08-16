#include <stdio.h>

int main() {
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = num & (-num);
    printf("The lowest order set bit value is %d\n", result);

    return 0;
}