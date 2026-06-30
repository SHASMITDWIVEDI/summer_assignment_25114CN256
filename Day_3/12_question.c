#include <stdio.h>

int main() {
    int n1, n2, max;
    
    printf("Enter first: ");
    scanf("%d", &n1);
    printf("Enter second: ");
    scanf("%d", &n2);
    
    if (n1 > n2) {
        max = n1;
    } else {
        max = n2;
    }
    
    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            printf("LCM is: %d\n", max);
            break;
        }
        max = max + 1;
    }
    
    return 0;
}