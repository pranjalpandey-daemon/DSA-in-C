#include <stdio.h>

int main() {
    // Step 1: Create a string (a group of characters)
    char name[50];  // This means we can store up to 49 characters + 1 for the special end character '\0'

    // Step 2: Ask the user to type a word or sentence
    printf("Please enter a word or sentence: ");
    scanf("%49s", name);  // This reads the input and stores it in the 'name' array, limiting to 49 characters

    // Step 3: Use a pointer to go through each character one by one
    char *ptr = name;  // 'ptr' now points to the first character of the string

    int length = 0;  // This will count how many characters are in the string

    // Step 4: Loop through the string until we find the special end character '\0'
    while (*ptr != '\0') {
        length++;     // Add 1 to the length for each character we find
        ptr++;        // Move the pointer to the next character
    }

    // Step 5: Show the result
    printf("The length of the string is: %d\n", length);

    return 0;  // This tells the computer the program ended successfully
}
