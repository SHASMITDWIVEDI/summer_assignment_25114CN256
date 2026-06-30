#include <stdio.h>

int main() {
    int num, sum = 0;
    
    printf("Enter number: ");
    scanf("%d", &num);
    
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum = sum + i;
        }
    }
    
    if (sum == num) {
        printf("Perfect Number\n");
    } else {
        printf("Not Perfect Number\n");
    }
    
    return 0;
}