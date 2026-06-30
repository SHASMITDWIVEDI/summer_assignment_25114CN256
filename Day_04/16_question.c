#include <stdio.h>

int main() {
    int start, end, rem, result, digits, temp, copy;
    
    printf("Enter start: ");
    scanf("%d", &start);
    printf("Enter end: ");
    scanf("%d", &end);
    
    for (int i = start; i <= end; i++) {
        temp = i;
        digits = 0;
        
        while (temp != 0) {
            temp = temp / 10;
            digits = digits + 1;
        }
        
        temp = i;
        result = 0;
        
        while (temp != 0) {
            rem = temp % 10;
            
            int p = 1;
            for (int j = 1; j <= digits; j++) {
                p = p * rem;
            }
            
            result = result + p;
            temp = temp / 10;
        }
        
        if (result == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}