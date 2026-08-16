#include <stdio.h>

int main() {
    int amount;
    int notes[] = {500, 100, 50, 20, 10, 5, 2, 1};
    int numNotes = 8;

    printf("Enter amount: ");
    scanf("%d", &amount);

    printf("Minimum number of notes required:\n");

    for (int i = 0; i < numNotes; i++) {
        if (amount >= notes[i]) {
            int count = amount / notes[i];
            amount = amount % notes[i];
            printf("Rs. %d x %d\n", notes[i], count);
        }
    }

    return 0;
}