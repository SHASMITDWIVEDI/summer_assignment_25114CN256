#include <stdio.h>

int isPerfect(int n) {
    int sum = 0;
    
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }
    
    if (sum == n) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num <= 0) {
        printf("Please enter a positive number.\n");
    } else if (isPerfect(num)) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }
    
    return 0;
}