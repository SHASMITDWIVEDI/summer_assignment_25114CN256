#include <stdio.h>

int main() {
    int choice;
    float balance = 5000.0;
    float amount;

    do {
        printf("\n--- ATM Simulation ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: $%.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance = balance + amount;
                    printf("Successfully deposited $%.2f\n", amount);
                } else {
                    printf("Invalid amount!\n");
                }
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance = balance - amount;
                    printf("Successfully withdrew $%.2f\n", amount);
                } else if (amount > balance) {
                    printf("Insufficient balance!\n");
                } else {
                    printf("Invalid amount!\n");
                }
                break;
            case 4:
                printf("Thank you for using our ATM. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}