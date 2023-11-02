#include <stdio.h>
#include <stdlib.h>

void display(int arr[], int size)
{
    printf("[");
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
        if (i < size - 1)
        {
            printf(",");
        }
    }
    printf("]\n");
}

int *insertElement(int arr[], int size, int position, int value)
{
    int *newArray = (int *)malloc((size + 1) * sizeof(int));
    for (int i = 0; i < size + 1; i++)
    {
        if (i < position - 1)
        {
            newArray[i] = arr[i];
        }
        else if (i == position - 1)
        {
            newArray[i] = value;
        }
        else
        {
            newArray[i] = arr[i - 1];
        }
    }
    return newArray;
}

void main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int position = 3;
    int value = 100;

    int choise = 0;
    
    display(arr, size);

    int *inserted = insertElement(arr, size, position, value);

    display(inserted, size + 1);
    
    display(arr, size);

    free(inserted);
}