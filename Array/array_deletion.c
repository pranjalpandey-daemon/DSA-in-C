#include <stdio.h>

// 🧑‍💻 Function to display the elements of an array
void display(int arr[], int size) {
    printf("Current Array Elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// ⚙️ Function to delete an element at a given position
int deletion(int arr[], int size, int index) {
    // 🧩 Check if index is valid (0-based index)
    if (index < 0 || index >= size) {
        printf("❌ Invalid index! Deletion not possible.\n");
        return size; // return unchanged size
    }

    // Shift each element one position left to fill the deleted gap
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Return the new size (since one element is deleted)
    return size - 1;
}

int main() {
    // 🔢 Example array
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5; // initial number of elements

    // Display the array before deletion
    printf("Before Deletion:\n");
    display(arr, size);

    //  Ask user which index to delete
    int index;
    printf("Enter the index (0 to %d) to delete: ", size - 1);
    scanf("%d", &index);

    // 🧹 Perform deletion and update size
    size = deletion(arr, size, index);

    // 🖥️ Display the array after deletion
    printf("\nAfter Deletion:\n");
    display(arr, size);

    // ✨ End of program
    printf("\n✅ Deletion operation completed successfully!\n");

    return 0;
}
