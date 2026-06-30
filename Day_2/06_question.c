#include <stdio.h>

int main() {
    int num, rev = 0, r;
    
    printf("Enter number: ");
    scanf("%d", &num);
    
    while(num != 0) {
        r = num % 10;
        rev = rev * 10 + r;
        num = num / 10;
    }
    
    printf("Reverse is: %d\n", rev);
    
    return 0;
}