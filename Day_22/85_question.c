#include <stdio.h>

int main() {
    char str[100];
    int i;
    int len = 0;
    int isPalindrome = 1;

    printf("Enter a string: ");
    scanf(" %[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++) {
        len++;
    }

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome == 1) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}