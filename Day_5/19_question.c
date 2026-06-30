#include <stdio.h>

int main() {
    int num;
    
    printf("Enter number: ");
    scanf("%d", &num);
    
    printf("Factors are: ");
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}