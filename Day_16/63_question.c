#include <stdio.h>

int main() {
    int n, targetSum;
    int arr[100];
    int found = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the target sum: ");
    scanf("%d", &targetSum);
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == targetSum) {
                printf("Pair found: %d and %d\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }
    
    if (found == 0) {
        printf("No pair found with the given sum.\n");
    }
    
    return 0;
}