#include <msp430.h> 

void main(void)
{




    WDTCTL = WDTPW | WDTHOLD; // Stop Watchdog Timer
    P1DIR = 0xFF;             // Set all pins of P1 as outputs (0xFF in binary)
    P1OUT = 0x00;             // Set all pins of P1 to 0 initially

    while (1)
    {
        P1OUT = 0xFF; // Set all pins of P1 to 1 (turn on all outputs)
        __delay_cycles(100000); // Delay function to create a visible effect
        P1OUT = 0x00; // Set all pins of P1 to 0 (turn off all outputs)
        __delay_cycles(100000); // Delay function
    }



}

int Delay()
{
    unsigned int i, j;
    for (i = 0; i < 50000; i++)
    {
        for (j = 0; j < 2; j++)
        {
            // A simple delay loop to introduce a time delay
        }
    }
    return 0;
}
