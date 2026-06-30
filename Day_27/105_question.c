#include <stdio.h>
#include <string.h>

int main() {
    int rollNumbers[100];
    char names[100][50];
    float marks[100];
    int n, i, choice, searchRoll, found;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &rollNumbers[i]);
        printf("Name: ");
        scanf(" %[^\n]s", names[i]);
        printf("Marks: ");
        scanf("%f", &marks[i]);
    }

    do {
        printf("\n--- Student Record Management System ---\n");
        printf("1. Display All Records\n");
        printf("2. Search Student by Roll Number\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n--- Student Records ---\n");
                for (i = 0; i < n; i++) {
                    printf("Roll No: %d, Name: %s, Marks: %.2f\n", rollNumbers[i], names[i], marks[i]);
                }
                break;

            case 2:
                printf("\nEnter Roll Number to search: ");
                scanf("%d", &searchRoll);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (rollNumbers[i] == searchRoll) {
                        printf("\nRecord Found:\n");
                        printf("Roll No: %d\nName: %s\nMarks: %.2f\n", rollNumbers[i], names[i], marks[i]);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Record not found for Roll Number %d\n", searchRoll);
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