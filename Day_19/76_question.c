#include <stdio.h>

int main() {
    int n;
    int a[10][10];
    int sum = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        sum = sum + a[i][i];
    }

    printf("Sum of diagonal elements: %d\n", sum);

    return 0;
}