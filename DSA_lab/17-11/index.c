#include <stdio.h>
#define MAX_SIZE 100

void display(int a[], int s) {
    printf("Array: ");
    for (int i = 0; i < s; i++) printf("%d ", a[i]);
    printf("\n");
}

int main() {
    printf("crn : 22CSME0  \n name :        \n");
    int arr[MAX_SIZE], s = 0, c;
    printf("Enter size of array (max %d): ", MAX_SIZE);
    scanf("%d", &s);
    if (s > MAX_SIZE || s <= 0) { printf("Invalid size. Exiting.\n"); return 1; }
    printf("Enter elements:\n");
    for (int i = 0; i < s; i++) { printf("Element %d: ", i + 1); scanf("%d", &arr[i]); }
    while (1) {
        printf("\nArray Operations:\n1. Insert at Beginning\n2. Insert at End\n3. Insert at User Choice\n4. Delete from User Choice\n5. Search Element\n6. Traverse Array\n7. Exit\nEnter choice: ");
        scanf("%d", &c);
        switch (c) {
            case 1: if (s < MAX_SIZE) { 
                int n; 
                printf("Number to insert at beginning: "); 
                scanf("%d", &n); 
                for (int i = s; i > 0; i--) arr[i] = arr[i - 1]; arr[0] = n; s++; 
                printf("Inserted at beginning.\n"); 
                } else printf("Array is full. Cannot insert.\n"); 
                break;
            case 2: if (s < MAX_SIZE) { 
                int n; printf("Number to insert at end: "); 
                scanf("%d", &n); arr[s] = n; s++; 
                printf("Inserted at end.\n"); 
                } else printf("Array is full. Cannot insert.\n"); 
                break;
            case 3: if (s < MAX_SIZE) { 
                    int n, p; 
                    printf("Number to insert: "); 
                    scanf("%d", &n); printf("Position to insert (0 - %d): ", s);
                    scanf("%d", &p); 
                    if (p < 0 || p > s) printf("Invalid position!\n"); 
                    else { 
                    for (int i = s; i > p; i--) arr[i] = arr[i - 1]; arr[p] = n; s++; 
                    printf("Inserted at position %d.\n", p); 
                    } 
                } else printf("Array is full. Cannot insert.\n"); 
                break;
            case 4: if (s > 0) { 
                    int p; 
                    printf("Position to delete (0 - %d): ", s - 1); 
                    scanf("%d", &p); if (p < 0 || p >= s) printf("Invalid position!\n"); 
                    else { 
                    printf("Deleted element at position %d: %d\n", p, arr[p]); 
                    for (int i = p; i < s - 1; i++) arr[i] = arr[i + 1]; s--; 
                    } 
                } else printf("Array is empty. Nothing to delete.\n"); 
                break;
            case 5: if (s > 0) { 
                int target, found = 0; 
                printf("Enter element to search: "); 
                scanf("%d", &target); 
                for (int i = 0; i < s; i++) { 
                    if (arr[i] == target) { 
                    printf("Element found at position %d.\n", i);
                    found = 1; 
                    break; 
                    } 
                } if (!found) printf("Element not found in the array.\n"); 
                } else printf("Array is empty.\n"); 
                break;
            case 6: if (s > 0) display(arr, s); 
            else printf("Array is empty.\n"); 
            break;
            case 7: printf("Exiting. Thank you!\n"); 
            return 0;
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}