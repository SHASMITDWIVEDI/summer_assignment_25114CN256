#include <stdio.h>

int main() {
    int num, decimal = 0, base = 1, rem;
    
    printf("Enter a binary number: ");
    scanf("%d", &num);
    
    while (num > 0) {
        rem = num % 10;
        decimal = decimal + rem * base;
        num = num / 10;
        base = base * 2;
    }
    
    printf("Decimal: %d\n", decimal);
    
    return 0;
}