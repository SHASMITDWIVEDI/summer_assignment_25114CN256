// 3. Program to Find Factorial of a Number

#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    printf("Factorial = %lld", factorial);

    return 0;
}