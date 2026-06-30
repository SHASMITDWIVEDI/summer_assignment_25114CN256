#include <stdio.h>
#include <string.h>

int main() {
    char names[100][50];
    char phones[100][15];
    char emails[100][50];
    int n = 0;
    int choice, i, found;
    char searchName[50];

    printf("--- Contact Management System ---\n\n");
    printf("Enter initial number of contacts to save: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for contact %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", names[i]);
        printf("Phone Number: ");
        scanf("%s", phones[i]);
        printf("Email: ");
        scanf("%s", emails[i]);
    }

    do {
        printf("\n--- Contact Menu ---\n");
        printf("1. Display All Contacts\n");
        printf("2. Search Contact by Name\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n--- Saved Contacts ---\n");
                for (i = 0; i < n; i++) {
                    printf("Name: %s | Phone: %s | Email: %s\n", names[i], phones[i], emails[i]);
                }
                break;

            case 2:
                printf("\nEnter Name to search: ");
                scanf(" %[^\n]s", searchName);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (strcmp(names[i], searchName) == 0) {
                        printf("\nContact Found:\n");
                        printf("Name: %s\nPhone: %s\nEmail: %s\n", names[i], phones[i], emails[i]);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Contact with name '%s' not found.\n", searchName);
                }
                break;

            case 3:
                printf("Exiting Contact Management System. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 3);

    return 0;
}