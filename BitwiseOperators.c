// This program prints the maximum values for the and, or and xor comparisons
//                Written By : Akash Parida
//                Date : 31/03/21

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void calculateMaximum(unsigned int n, unsigned int k); // function prototype

// Function main begins program execution
int main(void)
{
    // Local declarations
    unsigned int n; // highest number to be considered
    unsigned int k; // result of a comparison must be lower than this number to be considered

    printf("%s", "\nEnter the highest number to be considered : "); // prompt
    scanf("%u", &n); // read the input and store

    printf("%s", "\nEnter the result of a comparison must be lower than this number to be considered : ");
    scanf("%u", &k); // read the input and store

    calculateMaximum(n, k); // function call
} // end function main

// User-defined function definition
void calculateMaximum(unsigned int n, unsigned int k)
{
    // Local declarations
    unsigned int maxAnd = 0;
    unsigned int maxOr = 0;
    unsigned int maxXor = 0;
    unsigned int x;
    unsigned int y;
    unsigned int z;

    for (unsigned int i = 1; i <= n; i++) {
        for (unsigned int j = i + 1; j <= n; j++) {
            x = i & j; // and
            y = i | j; // or
            z = i ^ j; // xor

            if (x < k && x > maxAnd) {
                maxAnd = x;
            } // end if
            if (y < k && y > maxOr) {
                maxOr = y;
            } // end if
            if (z < k && z > maxXor) {
                maxXor = z;
            } // end if
        } // end for
    } // end for

    printf("\nThe maximum AND value is  %u" "\nThe maximum OR value is %u" "\nThe maximum XOR value is %u\n\n", maxAnd, maxOr, maxXor); // printing the values
} // end function calculateMaximum