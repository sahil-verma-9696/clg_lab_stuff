#include <stdio.h>

void main()
{
    int size;
    int myArray[100];
    int key;

    printf("Enter the size of array \n");
    scanf("%d", &size);

    printf("Enter the element of array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &myArray[i]);
    }

    printf("Enter the value which you want to insert\n");
    scanf("%d", &key);

    // main logic
    for (int i = size; i > 0; i--)
    {
        myArray[i] = myArray[i - 1];
    }

    myArray[0] = key;

    printf("successfully inserted \n");
    for (int i = 0; i < size + 1; i++)
    {
        printf("%d\n", myArray[i]);
    }
}