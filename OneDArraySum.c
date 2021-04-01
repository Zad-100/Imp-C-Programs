// This program creates a dynamic integer array using malloc (taking
// elements as input from the user) and sums up the elements
//                Written By : Akash Parida
//                Date : 01/04/21

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

// Function main begins program execution
int main(void)
{
    // Local declarations
    unsigned int sizeOfArray;
    int sum = 0;

    // malloc is a function that allocates a block of (sizeOfArray * size of integer) bytes of memory,
    // returning a pointer to the beginning of the block
    int* oneDArray = (int*) malloc(sizeOfArray * sizeof(int)); // declaring the dynamic array using malloc
    
    printf("%s", "\nEnter the size of the array that you want to create : "); // prompt
    scanf("%u", &sizeOfArray); // read and store

    for (size_t i = 0; i <= (sizeOfArray - 1); i++) {
        printf("\nEnter element # %2u : ", (i + 1));
        // as arr already points to the address of the first element in the array,
        // arr + i points to the ith element
        scanf("%d", oneDArray + i); // read and store
    } // end for

    printf("%s", "\n");

    printf("%s", "\nThe list of elements that you entered is :-\n");
    for (size_t j = 0; j <= (sizeOfArray - 1); j++) {
        printf("%4d ", *(oneDArray + j)); // access the value present in the address
                                          // that (oneDArray + j) points to
                                          // that is, jth element
    } // end for

    printf("%s", "\n");

    for (size_t k = 0; k <= (sizeOfArray - 1); k++) {
        sum += *(oneDArray + k);
    } // end for

    printf("\nThe sum of the elements of the array is %d\n\n", sum);
} // end function main