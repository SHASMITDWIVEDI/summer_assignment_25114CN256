#include <stdio.h>
#include <string.h>

int main() {
    int empIds[100];
    char names[100][50];
    float basicSalaries[100];
    float allowances[100];
    float deductions[100];
    float netSalaries[100];
    int n, i, choice, searchId, found;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &empIds[i]);
        printf("Name: ");
        scanf(" %[^\n]s", names[i]);
        printf("Basic Salary: ");
        scanf("%f", &basicSalaries[i]);
        printf("Allowances: ");
        scanf("%f", &allowances[i]);
        printf("Deductions: ");
        scanf("%f", &deductions[i]);

        netSalaries[i] = basicSalaries[i] + allowances[i] - deductions[i];
    }

    do {
        printf("\n--- Salary Management System ---\n");
        printf("1. Display Salary Slips for All\n");
        printf("2. Search Salary Details by Employee ID\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n--- Payroll Overview ---\n");
                for (i = 0; i < n; i++) {
                    printf("ID: %d | Name: %s | Net Salary: %.2f\n", empIds[i], names[i], netSalaries[i]);
                }
                break;

            case 2:
                printf("\nEnter Employee ID to search: ");
                scanf("%d", &searchId);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (empIds[i] == searchId) {
                        printf("\n--- Salary Slip Found ---\n");
                        printf("ID: %d\n", empIds[i]);
                        printf("Name: %s\n", names[i]);
                        printf("Basic Salary: %.2f\n", basicSalaries[i]);
                        printf("Allowances: %.2f\n", allowances[i]);
                        printf("Deductions: %.2f\n", deductions[i]);
                        printf("Net Payable Salary: %.2f\n", netSalaries[i]);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Salary record not found for ID %d\n", searchId);
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