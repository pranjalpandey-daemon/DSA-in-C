// Program: Searching in Arrays
// Description: This program demonstrates how to search for an element
//              in an array using linear search method.

#include <stdio.h>  // Standard Input Output header file

int main() {
    // Step 1: Declare an integer array with fixed size
    int arr[5] = {10, 20, 30, 40, 50};
    // This array 'arr' contains 5 integer elements.

    // Step 2: Declare variables for iteration and storing search element
    int i, searchElement, found = 0;
    // 'i' is used for looping through array indices.
    // 'searchElement' stores the value that user wants to find.
    // 'found' is a flag variable to indicate if the element is found.

    // Step 3: Ask user to enter the element to search
    printf("Enter the element to search: ");
    scanf("%d", &searchElement);
    // 'scanf' reads the input from the user and stores it in 'searchElement'.

    // Step 4: Start a loop to traverse each element of the array
    for (i = 0; i < 5; i++) {
        // Loop runs from index 0 to index 4 (all valid array indices)

        // Step 5: Compare current element with the search element
        if (arr[i] == searchElement) {
            // If the element at index 'i' matches the search element
            printf("Element %d found at index %d\n", searchElement, i);
            // Print the index where element is found

            found = 1;  // Set the flag to indicate element is found
            break;      // Exit the loop since we found the element
        }
    }

    // Step 6: Check if element was not found
    if (found == 0) {
        // If 'found' is still 0 after the loop, element is not in array
        printf("Element %d not found in the array.\n", searchElement);
    }

    // Step 7: Return 0 to indicate successful execution of program
    return 0;
}
