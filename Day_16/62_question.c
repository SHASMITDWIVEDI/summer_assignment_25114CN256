#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int maxCount = 0;
    int maxElement;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        
        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }
    
    printf("Element with maximum frequency is: %d\n", maxElement);
    printf("It appears %d times\n", maxCount);
    
    return 0;
}