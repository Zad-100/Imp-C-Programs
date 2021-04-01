// This program reverses an one D integer array elements and assigns it to the orginal array itself
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
    unsigned int arraySize;
    
    printf("%s", "\nEnter the size of the array : "); // prompt
    scanf("%u", &arraySize);

    int oneDArray[arraySize]; // array delcaration (static)
    for (size_t i = 0; i <= (arraySize - 1); i++) {
        printf("\nEnter element # %2u : ", (i + 1)); // prompt
        scanf("%d", &oneDArray[i]); // read and store
    } // end for

    printf("%s", "\n");

    printf("%s", "\nThe original array list (before reversal) is :-\n");
    for (size_t j = 0; j <= (arraySize - 1); j++) {
        printf("%3d ", oneDArray[j]);
    } // end for

    printf("%s", "\n");

    // Now, here, I had done a big mistake while practicing on hackerrank.com
    // In the below for loop, as the second statement, I wrote k <= (arraySize - 1)
    // which actually undid all swapping that was done till the half-way of the array.
    // So make sure that the second expression is k < (arraySize / 2) so that you
    // stop when the middle number is arrived.
    // You also should not write k <= (arraySize / 2), as it would show erronous
    // result when the arraySize is even
    for (size_t k = 0; k < (arraySize / 2); k++) {
        int temporary = oneDArray[k]; // a temporary memory location to store the
                                      // individual elements and do the swapping
        oneDArray[k] = oneDArray[arraySize - k - 1];
        oneDArray[arraySize - k - 1] = temporary;
    } // end for

    printf("%s", "\n");

    printf("%s", "\nThe reversed array is :-\n");
    for (size_t l = 0; l <= (arraySize - 1); l++) {
        printf("%3d ", oneDArray[l]);
    } // end for

    printf("%s", "\n\n");

    // -----------------------------------------------------------------------------------------------------
    
    // The below code is the one submitted on hackerrank.com which works with dynamic array
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    
    for (size_t j = 0; j < num / 2; j++) {
        int temp = 0;
        temp = arr[j];
        arr[j] = arr[num - j - 1];
        arr[num - j - 1] = temp;
    }

    for(i = 0; i < num; i++) {
        printf("%d ", *(arr + i));
    } // end for
} // end function main