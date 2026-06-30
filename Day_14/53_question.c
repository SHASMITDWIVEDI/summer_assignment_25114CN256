#include <stdio.h>

int main() {
    int n, key, found = 0;
    int arr[100];
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter element to search: ");
    scanf("%d", &key);
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index: %d\n", i);
            found = 1;
            break;
        }
    }
    
    if (found == 0) {
        printf("Element not found in the array.\n");
    }
    
    return 0;
}