#include <stdio.h>

int main() {
    int rows;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    for (int i = rows; i >= 1; i--) {
        
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
       
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}