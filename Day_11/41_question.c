#include <stdio.h>

int findSum(int a, int b) {
    int sum;
    sum = a + b;
    return sum;
}

int main() {
    int num1, num2, result;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    result = findSum(num1, num2);
    
    printf("Sum is: %d\n", result);
    
    return 0;
}