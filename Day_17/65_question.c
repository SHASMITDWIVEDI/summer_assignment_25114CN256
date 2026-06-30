#include <stdio.h>

int main() {
    int n1, n2;
    int arr1[100], arr2[100], merged[200];
    
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    
    printf("Enter %d elements for first array:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    
    printf("Enter %d elements for second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }
    
    printf("Merged array is: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    
    return 0;
}