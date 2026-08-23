#include <stdio.h>

unsigned char addNumbers(unsigned char a, unsigned char b)
{
    return a + b;
}
int main()
{
    unsigned char a = 200;
    unsigned char b = 100;
    unsigned char result;
    result = addNumbers(a, b);
    printf("Result = %u\n", result);
    return 0;
}