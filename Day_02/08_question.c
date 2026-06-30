#include <stdio.h>

int main() {
    int num, temp, rev = 0, r;
    
    printf("Enter number: ");
    scanf("%d", &num);
    
    temp = num;
    
    while(temp != 0) {
        r = temp % 10;
        rev = rev * 10 + r;
        temp = temp / 10;
    }
    
    if(num == rev) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }
    
    return 0;
}