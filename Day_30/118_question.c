#include <stdio.h>
#include <string.h>

int main() {
    int bookIds[50];
    char titles[50][100];
    char authors[50][50];
    int n = 0;
    int choice, searchId, i, found;

    do {
        printf("\n--- Mini Library System ---\n");
        printf("1. Add a New Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (n >= 50) {
                    printf("\nLibrary storage is full!\n");
                } else {
                    printf("\nEnter details for book %d:\n", n + 1);
                    printf("Book ID: ");
                    scanf("%d", &bookIds[n]);
                    printf("Title: ");
                    scanf(" %[^\n]s", titles[n]);
                    printf("Author: ");
                    scanf(" %[^\n]s", authors[n]);
                    n++;
                    printf("Book added successfully!\n");
                }
                break;

            case 2:
                if (n == 0) {
                    printf("\nNo books available in the library.\n");
                } else {
                    printf("\n--- Library Books Catalogue ---\n");
                    printf("ID\t%-30s\t%-20s\n", "Title", "Author");
                    printf("------------------------------------------------------\n");
                    for (i = 0; i < n; i++) {
                        printf("%d\t%-30s\t%-20s\n", bookIds[i], titles[i], authors[i]);
                    }
                }
                break;

            case 3:
                if (n == 0) {
                    printf("\nLibrary is empty. Nothing to search.\n");
                } else {
                    printf("\nEnter Book ID to search: ");
                    scanf("%d", &searchId);
                    found = 0;
                    for (i = 0; i < n; i++) {
                        if (bookIds[i] == searchId) {
                            printf("\n--- Book Found ---\n");
                            printf("Book ID : %d\n", bookIds[i]);
                            printf("Title   : %s\n", titles[i]);
                            printf("Author  : %s\n", authors[i]);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Book with ID %d not found.\n", searchId);
                    }
                }
                break;

            case 4:
                printf("Exiting Mini Library System.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}