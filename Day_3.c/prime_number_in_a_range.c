#include <stdio.h>

int main() {
    int start, end, i, j, p;

    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers are:\n");

    for (i = start; i <= end; i++) {
        if (i < 2)
            continue;

        p = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                p = 0;
                break;
            }
        }

        if (p)
            printf("%d ", i);
    }

    return 0;
}