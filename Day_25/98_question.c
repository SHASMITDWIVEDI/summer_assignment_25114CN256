#include <stdio.h>

int main() {
    int n, i, j, k;
    char strings[20][100];
    int freq[256] = {0};
    int tempFreq[256] = {0};

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter the strings:\n");
    for (i = 0; i < n; i++) {
        scanf(" %[^\n]s", strings[i]);
    }

    for (j = 0; strings[0][j] != '\0'; j++) {
        freq[(unsigned char)strings[0][j]]++;
    }

    for (i = 1; i < n; i++) {
        for (k = 0; k < 256; k++) {
            tempFreq[k] = 0;
        }

        for (j = 0; strings[i][j] != '\0'; j++) {
            tempFreq[(unsigned char)strings[i][j]]++;
        }

        for (k = 0; k < 256; k++) {
            if (tempFreq[k] < freq[k]) {
                freq[k] = tempFreq[k];
            }
        }
    }

    printf("Common characters: ");
    for (i = 0; i < 256; i++) {
        while (freq[i] > 0) {
            printf("%c ", i);
            freq[i]--;
        }
    }
    printf("\n");

    return 0;
}