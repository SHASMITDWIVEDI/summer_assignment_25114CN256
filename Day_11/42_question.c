#include <stdio.h>

int findMax(int a, int b) {
    int max;
    if (a > b) {
        max = a;
    } else {
        max = b;
    }
    return max;
}

int main() {
    int num1, num2, result;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    result = findMax(num1, num2);
    
    printf("Maximum is: %d\n", result);
    
    return 0;
}