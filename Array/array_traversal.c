// Program: Traversal in Arrays
// Description: This program demonstrates how to traverse an array
//              and display its elements one by one using a loop.

#include <stdio.h>  // Standard Input Output header file

int main() {
    // Step 1: Declare an integer array with fixed size
    int arr[5] = {10, 20, 30, 40, 50};
    // This array 'arr' contains 5 elements of integer type.
    // The elements are stored in contiguous memory locations.

    // Step 2: Declare a variable 'i' for loop iteration
    int i;

    // Step 3: Display a message to indicate traversal operation
    printf("Traversal of Array Elements:\n");

    // Step 4: Start a loop to visit each element of the array
    for (i = 0; i < 5; i++) {
        // The loop starts from index 0 and continues until index 4.
        // The condition i < 5 ensures that we access only valid indices.

        // Step 5: Print the element at current index 'i'
        printf("Element at index %d = %d\n", i, arr[i]);
        // Here, 'arr[i]' gives the value stored at position 'i' in the array.
    }

    // Step 6: Return 0 to indicate successful execution of the program
    return 0;
}
