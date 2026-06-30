#include <stdio.h>

int main() {
    int n, target, found = 0;
    int arr[100];
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search: ");
    scanf("%d", &target);
    
    int low = 0;
    int high = n - 1;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        
        if (arr[mid] == target) {
            printf("Element found at index: %d\n", mid);
            found = 1;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    if (found == 0) {
        printf("Element not found in the array.\n");
    }
    
    return 0;
}