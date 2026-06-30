#include <stdio.h>

int main() {
    int n1, n2, n3;
    int arr1[100], arr2[100], arr3[100];
    
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter %d sorted elements:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter %d sorted elements:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    printf("Enter number of elements in third array: ");
    scanf("%d", &n3);
    printf("Enter %d sorted elements:\n", n3);
    for (int i = 0; i < n3; i++) {
        scanf("%d", &arr3[i]);
    }
    
    printf("Common elements are: ");
    
    int i = 0, j = 0, k = 0;
    int found = 0;
    
    while (i < n1 && j < n2 && k < n3) {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            printf("%d ", arr1[i]);
            found = 1;
            i++;
            j++;
            k++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr2[j] < arr3[k]) {
            j++;
        } else {
            k++;
        }
    }
    
    if (found == 0) {
        printf("None");
    }
    printf("\n");
    
    return 0;
}
