#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200] = "";
    int len1 = 0, len2 = 0;
    int i, j;
    int isRotation = 0;

    printf("Enter first string: ");
    scanf(" %[^\n]s", str1);
    printf("Enter second string: ");
    scanf(" %[^\n]s", str2);

    for (i = 0; str1[i] != '\0'; i++) {
        len1++;
    }
    for (i = 0; str2[i] != '\0'; i++) {
        len2++;
    }

    if (len1 == len2) {
        for (i = 0; i < len1; i++) {
            temp[i] = str1[i];
        }
        for (j = 0; j < len1; j++) {
            temp[i + j] = str1[j];
        }
        temp[i + j] = '\0';

        for (i = 0; i <= len1; i++) {
            int match = 1;
            for (j = 0; j < len1; j++) {
                if (temp[i + j] != str2[j]) {
                    match = 0;
                    break;
                }
            }
            if (match == 1) {
                isRotation = 1;
                break;
            }
        }
    }

    if (isRotation == 1) {
        printf("The strings are rotations of each other.\n");
    } else {
        printf("The strings are not rotations of each other.\n");
    }

    return 0;
}