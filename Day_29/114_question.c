#include <stdio.h>

int main() {
    int arr[100];
    int n = 0;
    int choice, i, value, position, found;

    printf("Enter the initial number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\n--- Menu-Driven Array Operations ---\n");
        printf("1. Display Array\n");
        printf("2. Insert an Element\n");
        printf("3. Delete an Element\n");
        printf("4. Search an Element\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (n == 0) {
                    printf("Array is empty.\n");
                } else {
                    printf("Array elements: ");
                    for (i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 2:
                printf("Enter the element to insert: ");
                scanf("%d", &value);
                printf("Enter the position (1 to %d): ", n + 1);
                scanf("%d", &position);

                if (position < 1 || position > n + 1) {
                    printf("Invalid position!\n");
                } else {
                    for (i = n; i >= position; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[position - 1] = value;
                    n++;
                    printf("Element inserted successfully.\n");
                }
                break;

            case 3:
                if (n == 0) {
                    printf("Array underflow! Nothing to delete.\n");
                } else {
                    printf("Enter the position to delete (1 to %d): ", n);
                    scanf("%d", &position);

                    if (position < 1 || position > n) {
                        printf("Invalid position!\n");
                    } else {
                        for (i = position - 1; i < n - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        n--;
                        printf("Element deleted successfully.\n");
                    }
                }
                break;

            case 4:
                printf("Enter the element to search: ");
                scanf("%d", &value);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        printf("Element found at position %d (index %d).\n", i + 1, i);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Element not found in the array.\n");
                }
                break;

            case 5:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}