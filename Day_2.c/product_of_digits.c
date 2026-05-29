#include <stdio.h>

int main() {
    int n, remainder, product = 1;

    printf("Enter an integer: ");
    
    scanf("%d", &n);

    if (n == 0) {
        product = 0;
    }

    while (n != 0) {
        remainder = n % 10;
        product = product * remainder;
        n = n / 10;
    }

    printf("Product of digits = %d\n", product);

    return 0;
}