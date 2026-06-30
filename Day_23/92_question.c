#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i;
    int max = 0;
    char maxChar;

    printf("Enter a string: ");
    scanf(" %[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    for (i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] > max) {
            max = freq[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character is: %c\n", maxChar);

    return 0;
}