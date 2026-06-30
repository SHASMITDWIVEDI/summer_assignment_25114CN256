#include <stdio.h>

int main() {
    int num, isPrime = 1;
    
    printf("Enter number: ");
    scanf("%d", &num);
    
    if (num <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    
    if (isPrime == 1) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }
    
    return 0;
}