#include <stdio.h>

void main()
{
    int size;
    int myArray[100];
    int key;
    int position;

    printf("Enter the size of array \n");
    scanf("%d", &size);

    printf("Enter the element of array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &myArray[i]);
    }

    printf("Enter the value which you want to insert\n");
    scanf("%d", &key);

    printf("Enter the desire position\n");
    scanf("%d", &position);

    // main login

    if (position < 1 || position > size + 1)
    {
        printf("Invalid position. Please enter a valid position.\n");
    }
    else
    {
        // Shift elements to make room for the new element
        for (int i = size; i >= position - 1; i--)
        {
            myArray[i + 1] = myArray[i];
        }

        // Insert the new element at the specified position
        myArray[position - 1] = key;

        // Update the size of the array
        size++;

        printf("Successfully inserted.\n");
        printf("Updated array: ");
        for (int i = 0; i < size; i++)
        {
            printf("%d\n", myArray[i]);
        }
    }
}