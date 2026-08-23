#include <stdio.h>

void LED_Toggle(int *led)
{
    *led = !(*led);
}

int main()
{
    int led = 0;

    printf("LED before toggle = %d\n", led);

    LED_Toggle(&led);

    printf("LED after toggle = %d\n", led);

    return 0;
}