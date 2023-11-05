#include <stdio.h>

void main() {
    int size;
    int myArray[100];

    printf("Enter the size of array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Array size should be greater than 0.\n");
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &myArray[i]);
    }

    // Check if the array is empty
    if (size == 0) {
        printf("Array is already empty.\n");
    } else {
        // Shift elements to delete the first element
        for (int i = 0; i < size - 1; i++) {
            myArray[i] = myArray[i + 1];
        }

        // Decrease the size of the array
        size--;

        printf("Successfully deleted the first element.\n");

        // Print the updated array
        printf("Updated array: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", myArray[i]);
        }
        printf("\n");
    }

}
