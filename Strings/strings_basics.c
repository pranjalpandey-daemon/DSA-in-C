// strings_basics.c
// A simple C program to demonstrate basic string operations

#include <stdio.h>   // for printf, scanf
#include <string.h>  // for string handling functions like strlen, strcpy, strcat, strcmp

int main() {
    // Declaring a string (character array) with size 50
    char str1[50];

    // Initializing a string directly
    char str2[] = "Hello";

    // Taking input from user
    printf("Enter a string: ");
    scanf("%s", str1);  
    // NOTE: scanf stops reading at space, so it won’t take multi-word input

    // Printing the string
    printf("You entered: %s\n", str1);

    // Finding length of string using strlen()
    int len = strlen(str1);
    printf("Length of str1 = %d\n", len);

    // Copying one string into another using strcpy()
    char copyStr[50];
    strcpy(copyStr, str1);  
    printf("Copied string = %s\n", copyStr);

    // Concatenating (joining) two strings using strcat()
    strcat(str1, str2);  
    printf("After concatenation (str1 + str2) = %s\n", str1);

    // Comparing two strings using strcmp()
    // strcmp returns 0 if both strings are equal
    if (strcmp(str1, copyStr) == 0) {
        printf("str1 and copyStr are SAME\n");
    } else {
        printf("str1 and copyStr are DIFFERENT\n");
    }

    // Demonstrating multi-word input using fgets()
    char sentence[100];
    printf("Enter a sentence: ");
    getchar(); // to consume the leftover newline from previous input
    fgets(sentence, sizeof(sentence), stdin);  
    // fgets reads until newline or size limit, and keeps spaces
    printf("You entered sentence: %s\n", sentence);

    return 0;
}
