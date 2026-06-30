#include <stdio.h>

int main() {
    int rows;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }
        
        ch = ch - 2;
        for (int j = i - 1; j >= 1; j--) {
            printf("%c", ch);
            ch--;
        }
        
        printf("\n");
    }
    
    return 0;
}