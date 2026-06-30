#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int totalSum, currentSum = 0;
    int missingNumber;
    

    printf("Enter total expected elements in sequence (n): ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n - 1);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }
    
    
    totalSum = (n * (n + 1)) / 2;
    
    
    for (int i = 0; i < n - 1; i++) {
        currentSum = currentSum + arr[i];
    }
    
    missingNumber = totalSum - currentSum;
    
    printf("The missing number is: %d\n", missingNumber);
    
    return 0;
}