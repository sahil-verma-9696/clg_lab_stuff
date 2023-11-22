#include <stdio.h>

#define MAX_SIZE 100

void displayArray(int arr[], int size)
{
  printf("Current Array: ");
  printf("[");
  for (int i = 0; i < size; i++)
  {
    printf(" %d ", arr[i]);
    if (i == size - 1)
      break;
    printf(",");
  }
  printf("]");
  printf("\n");
}

void insertBeginning(int arr[], int size)
{
  if (size < MAX_SIZE)
  {
    int num;
    printf("Enter the number to insert at the beginning: ");
    scanf("%d", &num);

    for (int i = size; i > 0; i--)
    {
      arr[i] = arr[i - 1];
    }
    arr[0] = num;
    size++;
    printf("Number inserted at the beginning.\n");
  }
  else
  {
    printf("Array is full. Cannot insert.\n");
  }
}

void insertEnd(int arr[], int size)
{
  if (size < MAX_SIZE)
  {
    int num;
    printf("Enter the number to insert at the end: ");
    scanf("%d", &num);
    arr[size] = num;
    size++;
    printf("Number inserted at the end.\n");
  }
  else
  {
    printf("Array is full. Cannot insert.\n");
  }
}

void insertUserChoice(int arr[], int size)
{
  if (size < MAX_SIZE)
  {
    int num, pos;
    printf("Enter the number to insert: ");
    scanf("%d", &num);
    printf("Enter the position to insert (0 - %d): ", size);
    scanf("%d", &pos);

    if (pos < 0 || pos > size)
    {
      printf("Invalid position! Please enter a valid position.\n");
    }
    else
    {
      for (int i = size; i > pos; i--)
      {
        arr[i] = arr[i - 1];
      }
      arr[pos] = num;
      size++;
      printf("Number inserted at position %d.\n", pos);
    }
  }
  else
  {
    printf("Array is full. Cannot insert.\n");
  }
}

void deleteBeginning(int arr[], int size)
{
  if (size > 0)
  {
    printf("Deleted element from the beginning: %d\n", arr[0]);
    for (int i = 0; i < size - 1; i++)
    {
      arr[i] = arr[i + 1];
    }
    size--;
  }
  else
  {
    printf("Array is empty. Nothing to delete.\n");
  }
}

void deleteEnd(int arr[], int size)
{
  if (size > 0)
  {
    printf("Deleted element from the end: %d\n", arr[size - 1]);
    size--;
  }
  else
  {
    printf("Array is empty. Nothing to delete.\n");
  }
}

void deleteUserChoice(int arr[], int size)
{
  if (size > 0)
  {
    int pos;
    printf("Enter the position to delete (0 - %d): ", size - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= size)
    {
      printf("Invalid position! Please enter a valid position.\n");
    }
    else
    {
      printf("Deleted element at position %d: %d\n", pos, arr[pos]);
      for (int i = pos; i < size - 1; i++)
      {
        arr[i] = arr[i + 1];
      }
      size--;
    }
  }
  else
  {
    printf("Array is empty. Nothing to delete.\n");
  }
}

void traversing(int arr[], int size)
{
  if (size > 0)
  {
    displayArray(arr, size);
  }
  else
  {
    printf("Array is empty.\n");
  }
}

int choiceMaking(int arr[], int size)
{
  int choice;
  while (1)
  {
    printf("\nArray Operations:\n");
    printf("1. Insert at Beginning\n");
    printf("2. Insert at End\n");
    printf("3. Insert at User Choice\n");
    printf("4. Delete from Beginning\n");
    printf("5. Delete from End\n");
    printf("6. Delete from User Choice\n");
    printf("7. Traverse Array\n");
    printf("8. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      insertBeginning(arr, size);
      break;
    case 2:
      insertEnd(arr, size);
      break;
    case 3:
      insertUserChoice(arr, size);
      break;
    case 4:
      deleteBeginning(arr, size);
      break;
    case 5:
      deleteEnd(arr, size);
      break;
    case 6:
      deleteUserChoice(arr, size);
      break;
    case 7:
      traversing(arr, size);
      break;
    case 8:
      printf("Exiting the program. Thank you!\n");
      return 0;
    default:
      printf("Invalid choice! Please enter a valid option.\n");
    }
  }
}

int userInputs()
{
  int arr[MAX_SIZE];
  int size = 0;

  printf("Enter the size of the array (max %d): ", MAX_SIZE);
  scanf("%d", &size);

  if (size > MAX_SIZE || size <= 0)
  {
    printf("Invalid size entered or size exceeds the limit. Exiting.\n");
    return 1;
  }

  printf("Enter the elements of the array:\n");
  for (int i = 0; i < size; i++)
  {
    printf("Enter element %d: ", i);
    scanf("%d", &arr[i]);
  }

  choiceMaking(arr,size);
}

void main()
{
  userInputs();
}