#include <stdio.h>

long long findPower(int x, int n) {
    if (n == 0) {
        return 1;
    }
    return x * findPower(x, n - 1);
}

int main() {
    int x, n;
    
    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter power (n): ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Error\n");
    } else {
        printf("Result: %lld\n", findPower(x, n));
    }
    
    return 0;
}