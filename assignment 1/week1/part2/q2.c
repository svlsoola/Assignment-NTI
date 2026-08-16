#include <stdio.h>

int main() {
    int num[5];

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }

    printf("Numbers divisible by 3:\n");
    for (int i = 0; i < 5; i++) {
        if (num[i] % 3 == 0) {
            printf("%d\n", num[i]);
        }
    }

    return 0;
}