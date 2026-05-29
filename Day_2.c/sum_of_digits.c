#include <stdio.h>

int main() {
    int n, remainder, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}