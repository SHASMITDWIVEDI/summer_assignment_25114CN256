#include <stdio.h>
#include <string.h>

int main() {
    int accountNumbers[100];
    char names[100][50];
    float balances[100];
    int n = 0;
    int choice, searchAcc, i, found;
    float amount;

    printf("--- Bank Account System ---\n\n");
    printf("Enter number of accounts to create: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for account %d:\n", i + 1);
        printf("Account Number: ");
        scanf("%d", &accountNumbers[i]);
        printf("Account Holder Name: ");
        scanf(" %[^\n]s", names[i]);
        printf("Opening Balance: ");
        scanf("%f", &balances[i]);
    }

    do {
        printf("\n--- Banking Menu ---\n");
        printf("1. Display All Accounts\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n--- Account Records ---\n");
                for (i = 0; i < n; i++) {
                    printf("Acc No: %d | Name: %s | Balance: $%.2f\n", 
                           accountNumbers[i], names[i], balances[i]);
                }
                break;

            case 2:
                printf("\nEnter Account Number for deposit: ");
                scanf("%d", &searchAcc);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (accountNumbers[i] == searchAcc) {
                        found = 1;
                        printf("Enter amount to deposit: ");
                        scanf("%f", &amount);
                        if (amount > 0) {
                            balances[i] = balances[i] + amount;
                            printf("Successfully deposited $%.2f. New Balance: $%.2f\n", amount, balances[i]);
                        } else {
                            printf("Invalid amount!\n");
                        }
                        break;
                    }
                }
                if (!found) {
                    printf("Account number %d not found.\n", searchAcc);
                }
                break;

            case 3:
                printf("\nEnter Account Number for withdrawal: ");
                scanf("%d", &searchAcc);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (accountNumbers[i] == searchAcc) {
                        found = 1;
                        printf("Enter amount to withdraw: ");
                        scanf("%f", &amount);
                        if (amount > 0 && amount <= balances[i]) {
                            balances[i] = balances[i] - amount;
                            printf("Successfully withdrew $%.2f. New Balance: $%.2f\n", amount, balances[i]);
                        } else if (amount > balances[i]) {
                            printf("Insufficient balance! Current Balance: $%.2f\n", balances[i]);
                        } else {
                            printf("Invalid amount!\n");
                        }
                        break;
                    }
                }
                if (!found) {
                    printf("Account number %d not found.\n", searchAcc);
                }
                break;

            case 4:
                printf("Exiting Bank Account System. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}