#include <stdio.h>
#include <string.h>

int main() {
    int empIds[50];
    char names[50][50];
    char designations[50][30];
    int n = 0;
    int choice, searchId, i, found;

    do {
        printf("\n--- Mini Employee Management System ---\n");
        printf("1. Add Employee Record\n");
        printf("2. Display All Employee Records\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (n >= 50) {
                    printf("\nDatabase is full! Cannot add more records.\n");
                } else {
                    printf("\nEnter details for employee %d:\n", n + 1);
                    printf("Employee ID: ");
                    scanf("%d", &empIds[n]);
                    printf("Name: ");
                    scanf(" %[^\n]s", names[n]);
                    printf("Designation: ");
                    scanf(" %[^\n]s", designations[n]);
                    n++;
                    printf("Employee record added successfully!\n");
                }
                break;

            case 2:
                if (n == 0) {
                    printf("\nNo employee records available.\n");
                } else {
                    printf("\n--- Employee Directory ---\n");
                    printf("ID\t%-25s\t%-20s\n", "Name", "Designation");
                    printf("--------------------------------------------------------\n");
                    for (i = 0; i < n; i++) {
                        printf("%d\t%-25s\t%-20s\n", empIds[i], names[i], designations[i]);
                    }
                }
                break;

            case 3:
                if (n == 0) {
                    printf("\nDatabase is empty. Nothing to search.\n");
                } else {
                    printf("\nEnter Employee ID to search: ");
                    scanf("%d", &searchId);
                    found = 0;
                    for (i = 0; i < n; i++) {
                        if (empIds[i] == searchId) {
                            printf("\n--- Employee Details Found ---\n");
                            printf("Employee ID : %d\n", empIds[i]);
                            printf("Name        : %s\n", names[i]);
                            printf("Designation : %s\n", designations[i]);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Employee with ID %d not found.\n", searchId);
                    }
                }
                break;

            case 4:
                printf("Exiting Employee Management System. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}