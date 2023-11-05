#include <stdio.h>

void main() {
    int size;
    int myArray[100];

    printf("Enter the size of array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Array size should be greater than 0.\n");
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &myArray[i]);
    }

    // Check if the array is empty
    if (size == 0) {
        printf("Array is already empty.\n");
    } else {
        // Decrease the size of the array to delete the last element
        size--;

        printf("Successfully deleted the last element.\n");

        // Print the updated array
        printf("Updated array: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", myArray[i]);
        }
        printf("\n");
    }

}