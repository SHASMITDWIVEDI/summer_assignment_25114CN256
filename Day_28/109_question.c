#include <stdio.h>
#include <string.h>

int main() {
    int bookIds[100];
    char titles[100][100];
    char authors[100][50];
    int isIssued[100] = {0};
    int n = 0;
    int choice, searchId, i, found;

    printf("--- Library Management System ---\n\n");
    printf("Enter initial number of books to add: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for book %d:\n", i + 1);
        printf("Book ID: ");
        scanf("%d", &bookIds[i]);
        printf("Title: ");
        scanf(" %[^\n]s", titles[i]);
        printf("Author: ");
        scanf(" %[^\n]s", authors[i]);
    }

    do {
        printf("\n--- Library Menu ---\n");
        printf("1. Display All Books\n");
        printf("2. Issue a Book\n");
        printf("3. Return a Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n--- Book Records ---\n");
                for (i = 0; i < n; i++) {
                    printf("ID: %d | Title: %s | Author: %s | Status: %s\n", 
                           bookIds[i], titles[i], authors[i], 
                           isIssued[i] ? "Issued" : "Available");
                }
                break;

            case 2:
                printf("\nEnter Book ID to issue: ");
                scanf("%d", &searchId);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (bookIds[i] == searchId) {
                        found = 1;
                        if (isIssued[i] == 1) {
                            printf("Book is already issued to someone else.\n");
                        } else {
                            isIssued[i] = 1;
                            printf("Book '%s' has been successfully issued.\n", titles[i]);
                        }
                        break;
                    }
                }
                if (!found) {
                    printf("Book ID %d not found in records.\n", searchId);
                }
                break;

            case 3:
                printf("\nEnter Book ID to return: ");
                scanf("%d", &searchId);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (bookIds[i] == searchId) {
                        found = 1;
                        if (isIssued[i] == 0) {
                            printf("This book is already in the library.\n");
                        } else {
                            isIssued[i] = 0;
                            printf("Book '%s' has been successfully returned.\n", titles[i]);
                        }
                        break;
                    }
                }
                if (!found) {
                    printf("Book ID %d not found in records.\n", searchId);
                }
                break;

            case 4:
                printf("Exiting Library System.\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}