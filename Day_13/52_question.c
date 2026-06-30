#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int evenCount = 0;
    int oddCount = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    printf("Total even elements: %d\n", evenCount);
    printf("Total odd elements: %d\n", oddCount);
    
    return 0;
}