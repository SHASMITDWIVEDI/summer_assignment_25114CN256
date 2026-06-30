#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    int arr[100];
    int largest, secondLargest;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    if (n < 2) {
        printf("Array should have at least two elements.\n");
        return 0;
    }
    
    largest = INT_MIN;
    secondLargest = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    
    if (secondLargest == INT_MIN) {
        printf("There is no second largest element (all elements might be equal).\n");
    } else {
        printf("The second largest element is: %d\n", secondLargest);
    }
    
    return 0;
}