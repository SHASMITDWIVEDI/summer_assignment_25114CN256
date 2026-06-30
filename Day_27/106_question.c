#include <stdio.h>
#include <string.h>

int main() {
    int empIds[100];
    char names[100][50];
    char designations[100][50];
    float salaries[100];
    int n, i, choice, searchId, found;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &empIds[i]);
        printf("Name: ");
        scanf(" %[^\n]s", names[i]);
        printf("Designation: ");
        scanf(" %[^\n]s", designations[i]);
        printf("Salary: ");
        scanf("%f", &salaries[i]);
    }

    do {
        printf("\n--- Employee Management System ---\n");
        printf("1. Display All Employee Records\n");
        printf("2. Search Employee by ID\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n--- Employee Records ---\n");
                for (i = 0; i < n; i++) {
                    printf("ID: %d, Name: %s, Designation: %s, Salary: %.2f\n", empIds[i], names[i], designations[i], salaries[i]);
                }
                break;

            case 2:
                printf("\nEnter Employee ID to search: ");
                scanf("%d", &searchId);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (empIds[i] == searchId) {
                        printf("\nRecord Found:\n");
                        printf("ID: %d\nName: %s\nDesignation: %s\nSalary: %.2f\n", empIds[i], names[i], designations[i], salaries[i]);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Employee Record not found for ID %d\n", searchId);
                }
                break;

            case 3:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}