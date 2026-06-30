#include <stdio.h>

int main() {
    int num, count = 0;
    
    printf("Enter number: ");
    scanf("%d", &num);
    
    if (num == 0) {
        count = 1;
    } else {
        while(num != 0) {
            num = num / 10;
            count = count + 1;
        }
    }
    
    printf("Digits: %d\n", count);
    
    return 0;
}