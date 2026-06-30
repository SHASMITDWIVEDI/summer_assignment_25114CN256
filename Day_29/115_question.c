#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char temp[200];
    int choice;
    int i, len, isPalindrome;

    printf("Enter a string: ");
    scanf(" %[^\n]s", str);

    do {
        printf("\n--- Menu-Driven String Operations ---\n");
        printf("1. Display String Length\n");
        printf("2. Reverse the String\n");
        printf("3. Check if Palindrome\n");
        printf("4. Copy String to Another Buffer\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                len = strlen(str);
                printf("Length of the string: %d\n", len);
                break;

            case 2:
                len = strlen(str);
                printf("Reversed string: ");
                for (i = len - 1; i >= 0; i--) {
                    printf("%c", str[i]);
                }
                printf("\n");
                break;

            case 3:
                len = strlen(str);
                isPalindrome = 1;
                for (i = 0; i < len / 2; i++) {
                    if (str[i] != str[len - 1 - i]) {
                        isPalindrome = 0;
                        break;
                    }
                }
                if (isPalindrome) {
                    printf("The string is a palindrome.\n");
                } else {
                    printf("The string is not a palindrome.\n");
                }
                break;

            case 4:
                strcpy(temp, str);
                printf("Copied string successfully! New buffer contains: %s\n", temp);
                break;

            case 5:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}