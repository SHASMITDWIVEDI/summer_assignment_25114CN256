#include <stdio.h>

int main() {
    int n, i, p = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
           p = 0;

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
                          p = 0;
            break;
        }
    }

    if (p)
        printf("%d is a Prime Number", n);
    else
        printf("%d is Not a Prime Number", n);

    return 0;
}