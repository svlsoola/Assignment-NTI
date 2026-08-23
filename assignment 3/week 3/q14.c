#include <stdio.h>

void countCalls()
{
    static int count = 0;
    count++;
    printf("Function called %d times\n", count);
}

int main()
{

    printf("=== Function Call Counter ===\n");
    countCalls();
    countCalls();
    countCalls();
    countCalls();

    printf("\n=== Endian Check ===\n");
    unsigned int number = 0x12345678;
    unsigned char *ptr = (unsigned char *)&number;
    printf("Number = 0x%X\n", number);
    printf("Byte 1 = 0x%X\n", ptr[0]);
    printf("Byte 2 = 0x%X\n", ptr[1]);
    printf("Byte 3 = 0x%X\n", ptr[2]);
    printf("Byte 4 = 0x%X\n", ptr[3]);
    if (ptr[0] == 0x78)
    {
        printf("System is Little Endian\n");
    }
    else
    {
        printf("System is Big Endian\n");
    }
    return 0;
}