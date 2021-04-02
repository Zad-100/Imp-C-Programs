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

    // Now, the below codes are the two codes that I submitted on hackerrank.com.
    // These codes deal with dynamic arrays and uses pointers and related functions
    // extensively. I am not yet very clear about the difference. Also, I am not yet
    // familiar with the functions used in the below codes.

    // Editorial one :-
    // char *s;
    // s = malloc(1024 * sizeof(char));
    // scanf("%[^\n]", s);
    // s = realloc(s, strlen(s) + 1);
    
    // int lenght = strlen(s);
    // for (size_t i = 0; i <= lenght - 1; i++) {
    //     if (s[i] == ' ') {
    //         printf("%s", "\n");
    //     }
    //     else
    //     {
    //         printf("%c", s[i]);
    //     }
    // }

    // printf("%s", "\n\n");
} // end function main