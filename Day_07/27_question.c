#include <stdio.h>

int findSumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + findSumOfDigits(n / 10);
}

int main() {
    int num;
    
    printf("Enter number: ");
    scanf("%d", &num);
    
    if (num < 0) {
        num = -num;
    }
    
    printf("Sum of digits: %d\n", findSumOfDigits(num));
    
    return 0;
}
