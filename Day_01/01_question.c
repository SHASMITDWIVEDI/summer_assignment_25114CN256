#include <stdio.h>

int main() {
    int n, sum = 0;
    
    printf("Enter a positive number: ");
    scanf("%d", &n);
    
    
    for(int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    
    printf("The total sum of first %d natural numbers is: %d\n", n, sum);
    
    return 0;
}