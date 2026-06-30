#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int visited[100] = {0};
    int hasDuplicates = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Duplicate elements in the array are: ");
    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue;
        }
        
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }
        
        if (count > 1) {
            printf("%d ", arr[i]);
            hasDuplicates = 1;
        }
    }
    
    if (hasDuplicates == 0) {
        printf("None");
    }
    printf("\n");
    
    return 0;
}