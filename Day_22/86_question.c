#include <stdio.h>

int main() {
    char str[200];
    int i;
    int words = 0;

    printf("Enter a sentence: ");
    scanf(" %[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            words++;
        }
    }

    if (str[0] != '\0' && str[0] != ' ') {
        words++;
    }

    printf("Total number of words: %d\n", words);

    return 0;
}