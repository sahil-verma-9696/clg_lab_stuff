#include <stdio.h>

void main()
{
    int size;
    int myArray[100];
    int position;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    if (size <= 0)
    {
        printf("Array size should be greater than 0.\n");
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &myArray[i]);
    }

    printf("Enter the position you want to delete: ");
    scanf("%d", &position);

    // Check if the position is valid
    if (position < 1 || position > size)
    {
        printf("Invalid position. Please enter a valid position.\n");
    }
    else
    {
        // Shift elements to delete the element at the specified position
        for (int i = position - 1; i < size - 1; i++)
        {
            myArray[i] = myArray[i + 1];
        }

        // Decrease the size of the array
        size--;

        printf("Successfully deleted the element at position %d.\n", position);

        // Print the updated array
        printf("Updated array: ");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", myArray[i]);
        }
        printf("\n");
    }
}
