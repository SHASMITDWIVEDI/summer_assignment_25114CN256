#include <stdio.h>

int main() {
    int n, original, remainder, reverse = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        remainder = n % 10;
        reverse = (reverse * 10) + remainder;
        n = n / 10;
    }

    if (original == reverse) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is NOT a palindrome number.\n", original);
    }

    return 0;
}