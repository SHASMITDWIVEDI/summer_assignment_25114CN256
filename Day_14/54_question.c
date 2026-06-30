#include <stdio.h>

int main() {
    int n, key, count = 0;
    int arr[100];
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter element to find frequency: ");
    scanf("%d", &key);
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    
    printf("Frequency of %d is: %d\n", key, count);
    
    return 0;
}