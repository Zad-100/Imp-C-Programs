// This program prints the words of a input string (sentence) in seperate new lines
//                Written By : Akash Parida
//                Date : 02/04/21

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define STRING_SIZE 1024

// Function main begins program execution
int main(void)
{
    char stringArray[STRING_SIZE] = {0}; // character string declaration;
                                        // static and without pointers

    printf("%s", "\nEnter the string of words :-\n"); // prompt
    scanf("%[^\n]", stringArray); // read and store

    printf("\nThe string of characters that you entered is :-\n%s\n", stringArray);

    printf("%s", "\nBelow, the words of the string will be printed seperately in a new line :-\n\n");
    for (int i = 0; stringArray[i] != '\0'; i++) { // until the string character is
                                                   // null character '\0'
        if (stringArray[i] == ' ') {
            printf("%s", "\n");
        } // end if
        else
        {
            printf("%c", stringArray[i]);
        } // end else
    } // end for

    printf("%s", "\n\n");
} // end function main