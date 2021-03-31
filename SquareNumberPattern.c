// This program prints a pattern of numbers from 1 to n as shown below.
// *Each number is separated by a single space.
// Sample (n = 5) :-
//         5 5 5 5 5 5 5 5 5
//         5 4 4 4 4 4 4 4 5
//         5 4 3 3 3 3 3 4 5
//         5 4 3 2 2 2 3 4 5
//         5 4 3 2 1 2 3 4 5
//         5 4 3 2 2 2 3 4 5
//         5 4 3 3 3 3 3 4 5
//         5 4 4 4 4 4 4 4 5
//         5 5 5 5 5 5 5 5 5
//                Written By : Akash Parida
//                Date : 31/03/21

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

// Function main begins program execution
int main(void)
{
    // Local declarations
    unsigned int n;

    printf("%s", "\nEnter the upper limit of the pattern, n (not more than 99): "); // prompt
    scanf("%u", &n); // read and store

    if (n < 1 || n >= 100) {
        printf("%s", "\nEnter a natural number less than 100!\n\n"); // when the entered number is too large or is invalid
        exit(1);
    } // end if
    else
    {
        printf("%s", "\n");
       
        // The upper half of the pattern
        for (unsigned int i = 1; i <= (n - 1); i++) { // iteriate through the rows

            for (unsigned int j = n; j >= n - i + 2; j--) { // leftmost right triangle starting from the second row
                printf("%2u ", j);
            } // end for
            for (unsigned int j = 1; j <= (2 * (n - i) + 1); j++) { // middle triangle of repeating numbers starting from first row
                printf("%2u ", (n - i + 1));
            } // end for
            for (unsigned int j = n - i + 2; j <= n; j++) { // rightmost right triangle starting from the second row
                printf("%2u ", j);
            } // end for

            printf("%s", "\n"); // new row begins from new line
        }
        
        // The exact middle line of the pattern
        for (unsigned int i = n; i >= 1; i--) {
            printf("%2u ", i);
        } // end for
        for (unsigned int j = 2; j <= n; j++) {
            printf("%2u ", j);
        } // end for

        printf("%s", "\n"); // next row starts from a new line
        
        // The lower half of the pattern
        for (unsigned int i = (n - 1); i >= 1; i--) { // iteriate through the rows

            for (unsigned int j = n; j >= n - i + 2; j--) { // leftmost right triangle starting from the second row
                printf("%2u ", j);
            } // end for
            for (unsigned int j = 1; j <= (2 * (n - i) + 1); j++) { // middle triangle of repeating numbers starting from first row
                printf("%2u ", (n - i + 1));
            } // end for
            for (unsigned int j = n - i + 2; j <= n; j++) { // rightmost right triangle starting from the second row
                printf("%2u ", j);
            } // end for

            printf("%s", "\n"); // new row begins from new line
        } // end for

        printf("%s", "\n");
    } // end else
} // end function main