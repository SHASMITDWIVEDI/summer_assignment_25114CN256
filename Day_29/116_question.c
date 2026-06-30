#include <stdio.h>
#include <string.h>

int main() {
    int itemIds[100];
    char names[100][50];
    int quantities[100];
    float prices[100];
    int n = 0;
    int choice, searchId, i, found, reqQty;

    printf("--- Inventory Management System ---\n\n");
    printf("Enter initial number of items in inventory: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for item %d:\n", i + 1);
        printf("Item ID: ");
        scanf("%d", &itemIds[i]);
        printf("Item Name: ");
        scanf(" %[^\n]s", names[i]);
        printf("Quantity: ");
        scanf("%d", &quantities[i]);
        printf("Price per Unit: ");
        scanf("%f", &prices[i]);
    }

    do {
        printf("\n--- Inventory Menu ---\n");
        printf("1. Display All Items\n");
        printf("2. Update Stock (Restock/Purchase)\n");
        printf("3. Search Item by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n--- Current Inventory Status ---\n");
                printf("ID\tName\t\tQuantity\tPrice\n");
                printf("---------------------------------------------\n");
                for (i = 0; i < n; i++) {
                    printf("%d\t%-15s\t%d\t\t$%.2f\n", 
                           itemIds[i], names[i], quantities[i], prices[i]);
                }
                break;

            case 2:
                printf("\nEnter Item ID to update stock: ");
                scanf("%d", &searchId);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (itemIds[i] == searchId) {
                        found = 1;
                        printf("Item Found: %s (Current Qty: %d)\n", names[i], quantities[i]);
                        printf("1. Restock (Add)\n2. Sell (Subtract)\nChoose operation: ");
                        int op;
                        scanf("%d", &op);
                        
                        if (op == 1) {
                            printf("Enter quantity to add: ");
                            scanf("%d", &reqQty);
                            if (reqQty > 0) {
                                quantities[i] += reqQty;
                                printf("Stock updated successfully! New Qty: %d\n", quantities[i]);
                            } else {
                                printf("Invalid quantity!\n");
                            }
                        } else if (op == 2) {
                            printf("Enter quantity to sell: ");
                            scanf("%d", &reqQty);
                            if (reqQty > 0 && reqQty <= quantities[i]) {
                                quantities[i] -= reqQty;
                                printf("Sale successful! Total Cost: $%.2f. Remaining Qty: %d\n", 
                                       (reqQty * prices[i]), quantities[i]);
                            } else if (reqQty > quantities[i]) {
                                printf("Insufficient stock! Only %d units available.\n", quantities[i]);
                            } else {
                                printf("Invalid quantity!\n");
                            }
                        } else {
                            printf("Invalid operation selected.\n");
                        }
                        break;
                    }
                }
                if (!found) {
                    printf("Item ID %d not found in inventory.\n", searchId);
                }
                break;

            case 3:
                printf("\nEnter Item ID to search: ");
                scanf("%d", &searchId);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (itemIds[i] == searchId) {
                        printf("\n--- Item Details Found ---\n");
                        printf("ID: %d\nName: %s\nStock Available: %d\nPrice per Unit: $%.2f\n", 
                               itemIds[i], names[i], quantities[i], prices[i]);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Item ID %d not found.\n", searchId);
                }
                break;

            case 4:
                printf("Exiting Inventory Management System.\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}