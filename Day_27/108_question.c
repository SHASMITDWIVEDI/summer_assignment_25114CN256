#include <stdio.h>

int main() {
    char name[50];
    int rollNo;
    float sub1, sub2, sub3;
    float total, percentage;

    printf("--- Marksheet Generation System ---\n\n");

    printf("Enter Student Name: ");
    scanf(" %[^\n]s", name);
    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter marks for Subject 1 (out of 100): ");
    scanf("%f", &sub1);
    printf("Enter marks for Subject 2 (out of 100): ");
    scanf("%f", &sub2);
    printf("Enter marks for Subject 3 (out of 100): ");
    scanf("%f", &sub3);

    total = sub1 + sub2 + sub3;
    percentage = total / 3.0;

    printf("\n==================================\n");
    printf("           REPORT CARD            \n");
    printf("==================================\n");
    printf("Roll No: %d\n", rollNo);
    printf("Name:    %s\n", name);
    printf("----------------------------------\n");
    printf("Subject 1:   %.2f / 100\n", sub1);
    printf("Subject 2:   %.2f / 100\n", sub2);
    printf("Subject 3:   %.2f / 100\n", sub3);
    printf("----------------------------------\n");
    printf("Total Marks: %.2f / 300\n", total);
    printf("Percentage:  %.2f%%\n", percentage);
    
    if (percentage >= 40.0) {
        printf("Result:      PASSED\n");
    } else {
        printf("Result:      FAILED\n");
    }
    printf("==================================\n");

    return 0;
}