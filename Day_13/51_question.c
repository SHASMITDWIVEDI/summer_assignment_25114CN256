#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int largest, smallest;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    largest = arr[0];
    smallest = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    
    printf("Largest element is: %d\n", largest);
    printf("Smallest element is: %d\n", smallest);
    
    return 0;
}