#include <stdio.h>

int main() {
    int x, n;
    long long result = 1;
    
    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter power (n): ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        result = result * x;
    }
    
    printf("Result: %lld\n", result);
    
    return 0;
}