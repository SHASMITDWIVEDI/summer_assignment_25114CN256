#include <stdio.h>

int findFactorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * findFactorial(n - 1);
}

int main() {
    int num;
    
    printf("Enter number: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Error\n");
    } else {
        printf("Factorial is: %d\n", findFactorial(num));
    }
    
    return 0;
}