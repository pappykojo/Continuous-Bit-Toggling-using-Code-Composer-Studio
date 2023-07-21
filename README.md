# Project README - Continuous Bit Toggling using Code Composer Studio

## Project Overview

This project is developed by using Code Composer Studio (CCS) v12. The main objective of this project is to continuously toggle all the bits of Port 1 (P1) using the MSP430AFE223 microcontroller from the MSP430 family, which is pin-compatible with the 8051 microcontroller family.

## Original Question

Write an 8051 C program to toggle all the bits of P1 continuously.

Solution:

//Toggle P1 forever
#include <reg51.h>

void main(void)

{

for (;;)

{

p1=0x55;

p1=0xAA;

}}

## Project Description

The project contains a C program that implements the continuous bit-toggling functionality on Port 1 of the MSP430AFE223 microcontroller. The code is designed to toggle all the bits of P1 at a regular interval, creating a visible effect of the pins turning on and off.

## Compiler Configuration

The project workspace directory is set to "D:/Installed Applications/CodeComposerStudios Workspace".
The project uses two main compiler parts:

1. **C:/Program Files/Texas Instruments**
2. **C:/ti**

The compiler optimization setting is set to "Global Optimizations" for efficient code execution.

The "#include search paths" for the project are as follows:

1. ${CCS_BASE_ROOT}/msp430/include
2. ${PROJECT_ROOT}
3. ${CG_TOOL_ROOT}/include

## Usage Notes

- The original 8051 microcontroller library is not available in Code Composer Studio, so the project uses an MSP430AFE223 microcontroller from the MSP430 family, which is pin-compatible with the 8051 microcontroller family.
- Due to this replacement, the header file <reg51.h> used in the original question and solution becomes obsolete. The <msp430.h> header file is used instead. Therefore, the reference to "P1" in the original code is replaced with "P1OUT" to access Port 1 on the MSP430AFE223 microcontroller.

## How to Run the Project

1. Open Code Composer Studio (CCS) and create a new project in the provided workspace directory "D:/Installed Applications/CodeComposerStudios Workspace".
2. Configure the project settings with the appropriate compiler parts, optimization settings, and "#include search paths" as mentioned above.
3. Copy the modified C code (as provided in the solution) into the main source file of the project.
4. Connect the MSP430AFE223 microcontroller to the development board or programmer/debugger properly.
5. Build the project to ensure there are no compilation errors.
6. Flash the compiled code onto the MSP430AFE223 microcontroller.
7. Observe the behavior of Port 1 (P1OUT) continuously toggling all its bits.

## Additional Notes

- Make sure to properly configure any external devices connected to Port 1 (P1OUT) to avoid potential damage.
- Adjust the delay in the code (using "__delay_cycles()") based on the MSP430's clock frequency to achieve the desired toggling speed.

## Disclaimer

This project is provided as an educational example and does not claim to be a complete solution for specific applications. The user should understand the code and modify it as per their requirements. The author and the platform are not responsible for any damages or losses incurred due to the use of this code
