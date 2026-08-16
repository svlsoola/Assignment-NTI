#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("The most significant bit is 1 (set)\n");
    } else {
        printf("The most significant bit is 0 (not set)\n");
    }

    return 0;
}