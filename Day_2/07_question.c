#include <stdio.h>

int main() {
    int num, prod = 1, r;
    
    printf("Enter number: ");
    scanf("%d", &num);
    
    if(num == 0) {
        prod = 0;
    }
    
    while(num > 0) {
        r = num % 10;
        prod = prod * r;
        num = num / 10;
    }
    
    printf("Product is: %d\n", prod);
    
    return 0;
}