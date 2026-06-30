#include <stdio.h>

int main() {
    char str[200];
    int i, j;
    int maxLen = 0, currentLen = 0;
    int maxStart = 0, currentStart = 0;

    printf("Enter a sentence: ");
    scanf(" %[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            if (currentLen == 0) {
                currentStart = i;
            }
            currentLen++;
        } else {
            if (currentLen > maxLen) {
                maxLen = currentLen;
                maxStart = currentStart;
            }
            currentLen = 0;
        }
    }

    if (currentLen > maxLen) {
        maxLen = currentLen;
        maxStart = currentStart;
    }

    printf("The longest word is: ");
    for (i = maxStart; i < maxStart + maxLen; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}