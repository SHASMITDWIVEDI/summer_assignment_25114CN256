#include <stdio.h>
#include <string.h>

int main() {
    int rollNumbers[100];
    char names[100][50];
    char courses[100][30];
    float gpas[100];
    int n = 0;
    int choice, searchRoll, i, found;

    printf("--- Student Record System ---\n\n");
    printf("Enter initial number of student records to add: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &rollNumbers[i]);
        printf("Name: ");
        scanf(" %[^\n]s", names[i]);
        printf("Course/Branch: ");
        scanf(" %[^\n]s", courses[i]);
        printf("GPA: ");
        scanf("%f", &gpas[i]);
    }

    do {
        printf("\n--- Student Records Menu ---\n");
        printf("1. Display All Student Records\n");
        printf("2. Search Student by Roll Number\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (n == 0) {
                    printf("\nNo student records available.\n");
                } else {
                    printf("\n--- All Student Records ---\n");
                    printf("Roll No\t%-20s\t%-15s\tGPA\n", "Name", "Course");
                    printf("---------------------------------------------------------\n");
                    for (i = 0; i < n; i++) {
                        printf("%d\t%-20s\t%-15s\t%.2f\n", 
                               rollNumbers[i], names[i], courses[i], gpas[i]);
                    }
                }
                break;

            case 2:
                printf("\nEnter Roll Number to search: ");
                scanf("%d", &searchRoll);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (rollNumbers[i] == searchRoll) {
                        printf("\n--- Record Found ---\n");
                        printf("Roll Number   : %d\n", rollNumbers[i]);
                        printf("Student Name  : %s\n", names[i]);
                        printf("Course/Branch : %s\n", courses[i]);
                        printf("Current GPA   : %.2f\n", gpas[i]);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Student with Roll Number %d not found.\n", searchRoll);
                }
                break;

            case 3:
                printf("Exiting Student Record System.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}