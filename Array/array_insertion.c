# include <stdio.h>

int main() {
    // Declare an array with extra capacity (50 elements max)
    // Even if wee use fewer elements, we keep extra space for future insertions
    int arr[50] = {1, 2, 3, 4, 5};
    int n, pos, value;

    // Step 1:Take the correct input for the initial array
    printf("Enter the number of elements in the array (max 50): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 2: Ask user for the position and value to insert
    // Note: Position is 0-based index(0 = first element, n = end of array)
    printf("Enter the position to insert (0 to %d): ", n);
    scanf("%d", &pos);

    // step 3: Ask for the new value to insert 
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Step 4: Shift elements to the right to make space for the new element
    // We start from the end and move each one step ahead
    // This creates a "Gap" at the desired position
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Step 5: Insert the new element
    arr[pos] = value;
    // Increment the count of elements
    n++;
    // Step 6: Display OR print the updated array
    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}