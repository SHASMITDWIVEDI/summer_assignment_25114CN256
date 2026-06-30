#include <stdio.h>

int main() {
    int num;
    long long factorial = 1; 
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    
    if (num < 0) {
        printf("Factorial isn't defined for negative numbers.\n");
    } else {
        for(int i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("Factorial of %d is: %lld\n", num, factorial);
    }
    
    return 0;
}