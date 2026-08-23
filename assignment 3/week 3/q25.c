#include <stdio.h>

void sendFrame(unsigned char data[], unsigned char frame[])
{
    unsigned int sum = 0;

    /* Copy the 8 data bytes */
    for (int i = 0; i < 8; i++)
    {
        frame[i] = data[i];
        sum = sum + data[i];
    }

    /* Store the sum in 2 bytes */
    frame[8] = sum & 0xFF;
    frame[9] = (sum >> 8) & 0xFF;
}

int receiveFrame(unsigned char frame[])
{
    unsigned int receivedSum;
    unsigned int calculatedSum = 0;

    /* Calculate sum of the received 8 bytes */
    for (int i = 0; i < 8; i++)
    {
        calculatedSum = calculatedSum + frame[i];
    }

    /* Get the received sum from the last 2 bytes */
    receivedSum = frame[8] | (frame[9] << 8);

    /* Compare the two sums */
    if (calculatedSum == receivedSum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    unsigned char data[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    unsigned char frame[10];

    sendFrame(data, frame);

    printf("Frame sent:\n");

    for (int i = 0; i < 8; i++)
    {
        printf("%d ", frame[i]);
    }

    printf("\nChecksum bytes: %d %d\n", frame[8], frame[9]);

    /* Receive and check the frame */
    if (receiveFrame(frame))
    {
        printf("Data received correctly\n");
    }
    else
    {
        printf("Data received incorrectly\n");
    }

    return 0;
}