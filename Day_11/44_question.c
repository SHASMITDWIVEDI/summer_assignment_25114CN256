#include <stdio.h>

int findFactorial(int n) {
    int fact = 1;
    
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    
    return fact;
}

int main() {
    int num, result;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        result = findFactorial(num);
        printf("Factorial is: %d\n", result);
    }
    
    return 0;
}