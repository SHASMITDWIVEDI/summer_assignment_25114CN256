#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, next;
    
    printf("Enter term position: ");
    scanf("%d", &n);
    
    if (n == 1) {
        printf("Term is: %d\n", t1);
    } else if (n == 2) {
        printf("Term is: %d\n", t2);
    } else {
        for (int i = 3; i <= n; i++) {
            next = t1 + t2;
            t1 = t2;
            t2 = next;
        }
        printf("Term is: %d\n", t2);
    }
    
    return 0;
}