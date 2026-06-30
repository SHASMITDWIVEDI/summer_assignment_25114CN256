#include <stdio.h>

int main() {
    int n1, n2;
    int arr1[100], arr2[100];
    
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
    
    printf("Union of the two arrays is: ");
    
    for (int i = 0; i < n1; i++) {
        int duplicate = 0;
        for (int j = 0; j < i; j++) {
            if (arr1[i] == arr1[j]) {
                duplicate = 1;
                break;
            }
        }
        if (duplicate == 0) {
            printf("%d ", arr1[i]);
        }
    }
    
    for (int i = 0; i < n2; i++) {
        int duplicate = 0;
        
        for (int j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                duplicate = 1;
                break;
            }
        }
        
        if (duplicate == 0) {
            for (int j = 0; j < i; j++) {
                if (arr2[i] == arr2[j]) {
                    duplicate = 1;
                    break;
                }
            }
        }
        
        if (duplicate == 0) {
            printf("%d ", arr2[i]);
        }
    }
    
    printf("\n");
    
    return 0;
}