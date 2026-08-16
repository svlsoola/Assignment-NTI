#include <stdio.h>

int main()
{
    int Age;
    int Counter = 1;
    int Baby = 0;
    int School = 0;
    int Adult = 0;
    while (Counter <= 15)
    {
        printf("Enter age of person %d : ", Counter);
        scanf("%d", &Age);
        if (Age >= 0 && Age <= 5)
        {
            Baby++;
        }
        else if (Age >= 6 && Age <= 17)
        {
            School++;
        }
        else if (Age >= 18)
        {
            Adult++;
        }
        Counter++;
    }
    printf("\nStill a baby (0 - 5) = %d\n", Baby);
    printf("Attending school (6 - 17) = %d\n", School);
    printf("Adult life (18 and over) = %d\n", Adult);
    return 0;
}