#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int sum = 0;
    float average;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    
    average = (float)sum / n;
    
    printf("Sum is: %d\n", sum);
    printf("Average is: %.2f\n", average);
    
    return 0;
}