#include <stdio.h>

int main() {
    int num, original, rem, result = 0, digits = 0, temp;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    original = num;
    temp = num;
    
    while (temp != 0) {
        temp = temp / 10;
        digits = digits + 1;
    }
    
    temp = num;
    
    while (temp != 0) {
        rem = temp % 10;
        
        int p = 1;
        for (int i = 1; i <= digits; i++) {
            p = p * rem;
        }
        
        result = result + p;
        temp = temp / 10;
    }
    
    if (result == original) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }
    
    return 0;
}