#include <stdio.h>

int isArmstrong(int n) {
    int original = n;
    int sum = 0;
    int remainder;
    
    while (n > 0) {
        remainder = n % 10;
        sum = sum + (remainder * remainder * remainder);
        n = n / 10;
    }
    
    if (original == sum) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    
    return 0;
}