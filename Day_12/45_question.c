#include <stdio.h>

int isPalindrome(int n) {
    int original = n;
    int reversed = 0;
    int remainder;
    
    while (n > 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n = n / 10;
    }
    
    if (original == reversed) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isPalindrome(num)) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }
    
    return 0;
}